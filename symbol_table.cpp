#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 64
#define MAX_TYPE_LEN 16


typedef struct nodeType {
    char *type;
};

typedef struct Symbol {
    char name[MAX_NAME_LEN];
    char type[MAX_TYPE_LEN];
    int isInitialized;
    int isUsed;
    int isConstant;
    int scopeLevel;
    struct Symbol* next;
} Symbol;

Symbol* symbolTable = NULL;
int currentScope = 0;

void insertSymbol(const char* name, const char* type, int isConstant) {
    // Check for redeclaration in the same scope
    Symbol* existing = symbolTable;
    while (existing) {
        if (strcmp(existing->name, name) == 0 && existing->scopeLevel == currentScope) {
            printf("Semantic Error: Variable '%s' redeclared in the same scope (scope %d).\n", name, currentScope);
            return;
        }
        existing = existing->next;
    }

    Symbol* sym = (Symbol*)malloc(sizeof(Symbol));
    strncpy(sym->name, name, MAX_NAME_LEN);
    strncpy(sym->type, type, MAX_TYPE_LEN);
    sym->isInitialized = 0;
    sym->isUsed = 0;
    sym->isConstant = isConstant;
    sym->scopeLevel = currentScope;

    sym->next = symbolTable;
    symbolTable = sym;
}

Symbol* lookupSymbol(const char* name) {
    Symbol* current = symbolTable;
    while (current) {
        if (strcmp(current->name, name) == 0) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

void enterScope() {
    currentScope++;
}

void exitScope() {
    Symbol* prev = NULL;
    Symbol* curr = symbolTable;

    while (curr) {
        if (curr->scopeLevel == currentScope) {
            if (prev) prev->next = curr->next;
            else symbolTable = curr->next;

            Symbol* toDelete = curr;
            curr = curr->next;
            free(toDelete);
        } else {
            prev = curr;
            curr = curr->next;
        }
    }
    currentScope--;
}

void markInitialized(const char* name) {
    Symbol* sym = lookupSymbol(name);
    if (sym) {
        if (sym->isConstant && sym->isInitialized) {
            printf("Semantic Error: Constant '%s' is already initialized (scope %d).\n", name, sym->scopeLevel);
        } else {
            sym->isInitialized = 1;
        }
    }
}

void markUsed(const char* name) {
    Symbol* sym = lookupSymbol(name);
    if (sym) sym->isUsed = 1;
}

void printSymbolTable() {
    printf("\n------ SYMBOL TABLE ------\n");
    Symbol* current = symbolTable;
    while (current) {
        printf("Name: %s, Type: %s, Const: %d, Init: %d, Used: %d, Scope: %d\n",
               current->name, current->type, current->isConstant,
               current->isInitialized, current->isUsed, current->scopeLevel);
        current = current->next;
    }
    printf("--------------------------\n");
}

void reportSymbolWarnings() {
    printf("\nWarnings for scope %d:\n", currentScope);
    Symbol* current = symbolTable;
    while (current) {
        if (current->scopeLevel == currentScope) {
            if (!current->isUsed) {
                printf("Warning: Variable '%s' declared but never used.\n", current->name);
            }
            if (!current->isInitialized && current->isUsed) {
                printf("Warning: Variable '%s' used but not initialized.\n", current->name);
            }
        }
        current = current->next;
    }
}

void reportSymbolWarningsAllScopes() {
    printf("\n--- Symbol Warnings (All Scopes) ---\n");
    Symbol* current = symbolTable;
    while (current) {
        if (!current->isUsed) {
            printf("Warning: Variable '%s' (scope %d) declared but never used.\n", current->name, current->scopeLevel);
        }
        if (!current->isInitialized && current->isUsed) {
            printf("Warning: Variable '%s' (scope %d) used but not initialized.\n", current->name, current->scopeLevel);
        }
        current = current->next;
    }
    printf("------------------------------------\n");
}

void clearSymbolTable() {
    Symbol* current = symbolTable;
    while (current) {
        Symbol* temp = current;
        current = current->next;
        free(temp);
    }
    symbolTable = NULL;
    currentScope = 0;
}
void deleteSymbol(const char* name) {
    Symbol* prev = NULL;
    Symbol* curr = symbolTable;

    while (curr) {
        if (strcmp(curr->name, name) == 0) {
            if (prev) prev->next = curr->next;
            else symbolTable = curr->next;

            free(curr);
            printf("Symbol '%s' deleted from the symbol table.\n", name);
            return;
        }
        prev = curr;
        curr = curr->next;
    }
    printf("Symbol '%s' not found in the symbol table.\n", name);
}


void check_memory(void *ptr) {
    if (!ptr) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
}

nodeType *create_node(const char *type) {
    nodeType *node = (nodeType *)malloc(sizeof(nodeType));
    check_memory(node);
    node->type = strdup(type);  // duplicate to avoid pointer aliasing
    return node;
}

nodeType *arithmetic_operator_checker(nodeType *op1, nodeType *op2, int line_number) {
    // Handles: +, -, *, /, %, ^

    nodeType *result = (nodeType *)malloc(sizeof(nodeType));
    check_memory(result);

    if (!op2) {
        // Unary minus: -op1
        if (strcmp(op1->type, "int") != 0 && strcmp(op1->type, "float") != 0) {
            fprintf(stderr, "Error at line %d: Unary '-' not applicable to type '%s'.\n", line_number, op1->type);
            exit(EXIT_FAILURE);
        }
        result->type = op1->type;
    } else {
        if (
            strcmp(op1->type, "string") == 0 || strcmp(op2->type, "string") == 0 ||
            strcmp(op1->type, "char") == 0   || strcmp(op2->type, "char") == 0 ||
            strcmp(op1->type, "void") == 0   || strcmp(op2->type, "void") == 0
        ) {
            fprintf(stderr, "Error at line %d: Arithmetic operators cannot be applied to types '%s' and '%s'.\n",
                    line_number, op1->type, op2->type);
            exit(EXIT_FAILURE);
        }

        // Promote type if needed
        if (strcmp(op1->type, "float") == 0 || strcmp(op2->type, "float") == 0)
            result->type = strdup("float");
        else
            result->type = strdup("int");
    }

    return result;
}

nodeType *boolean_operator_checker(nodeType *op1, nodeType *op2, int line_number) {
    // Handles: &&, ||, <, <=, >, >=, ==, !=

    nodeType *result = create_node("bool");

    if (!op2) {
        // Unary logical NOT (!)
        if (strcmp(op1->type, "string") == 0 || strcmp(op1->type, "char") == 0 || strcmp(op1->type, "void") == 0) {
            fprintf(stderr, "Error at line %d: Logical '!' not applicable to type '%s'.\n", line_number, op1->type);
            exit(EXIT_FAILURE);
        }
    } else {
        if (
            strcmp(op1->type, "string") == 0 || strcmp(op2->type, "string") == 0 ||
            strcmp(op1->type, "char") == 0   || strcmp(op2->type, "char") == 0 ||
            strcmp(op1->type, "void") == 0   || strcmp(op2->type, "void") == 0
        ) {
            fprintf(stderr, "Error at line %d: Boolean operator cannot be applied to types '%s' and '%s'.\n",
                    line_number, op1->type, op2->type);
            exit(EXIT_FAILURE);
        }
    }

    return result;
}

nodeType *bitwise_operator_checker(nodeType *op1, nodeType *op2, int line_number) {
    // Handles: &, |, <<, >>

    if (strcmp(op1->type, "int") != 0 || strcmp(op2->type, "int") != 0) {
        fprintf(stderr, "Error at line %d: Bitwise operators require 'int' operands but got '%s' and '%s'.\n",
                line_number, op1->type, op2->type);
        exit(EXIT_FAILURE);
    }

    return create_node("int");
}