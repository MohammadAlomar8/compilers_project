#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 64
#define MAX_TYPE_LEN 16


typedef struct nodeType {
    char *type;
} nodeType;

typedef struct Symbol {
    char name[MAX_NAME_LEN];
    char type[MAX_TYPE_LEN];
    char dType[MAX_TYPE_LEN];
    int id;
    bool scopeActive;
    int isInitialized;
    int isUsed;
    // int isConstant; // replace with type
    int scopeLevel;

    int funcArguments[100];
    int funcArgCount;
    bool assignToFunc; // Flag to indicate if the symbol is assigned and used to a function

    struct Symbol* next;
} Symbol;

Symbol* symbolTable = NULL;
int currentScope = 0;
bool inLoop = false; // Global variable to track if we are in a loop
bool inSwitch = false; // Global variable to track if we are in a loop
bool isPrint = false; // Global variable to track if we are in a print statement
int glopalID = 0;
int isParameter = 0;
int workingSymbolID = -1; // Global variable to track the current working symbol ID
///////////
int funcArgCount = 0;
int calledFuncIndex = 0; 
int funIndex = 0; 
///////////
bool returnInFunction = false; // Global variable to track if we are in a function with return type

bool existsInScope(const char* name, int line_number) {
    Symbol* current = symbolTable;
    while (current) {
        if (strcmp(current->name, name) == 0 && current->scopeLevel == currentScope && current->scopeActive) {
            return true;
        }
        current = current->next;
    }
    return false;
}


int insertSymbol(const char* name, const char* type, const char* dtype, int line_number, int infunction) {
    // Check if the symbol already exists in any scope
    if (existsInScope(name,line_number)) {
        printf("Error line %d: Symbol '%s' already exists in this acope.\n",line_number, name);
        exit(EXIT_FAILURE);
        
    }
    Symbol* sym = (Symbol*)malloc(sizeof(Symbol));
    strncpy(sym->name, name, MAX_NAME_LEN);
    strncpy(sym->type, type, MAX_TYPE_LEN);
    strncpy(sym->dType, dtype, MAX_TYPE_LEN);
    sym->isInitialized = 0;
    sym->isUsed = 0;
    sym->id = glopalID++;
    sym->scopeActive = true;
    sym->scopeLevel = currentScope;
    if (infunction || inLoop) {
        sym->scopeLevel = sym->scopeLevel + 1; // Reset isConstant for function parameters
    }
    if (strcmp(type, "function") == 0) {
        // It's a function — collect its parameters
        int j = 0;
        Symbol* current = symbolTable;
        while (current != NULL) {
            if (current->scopeLevel == (currentScope + 1) && !current->assignToFunc && strcmp(current->type, "variable") == 0) {
                // It's a function argument (variable type, inner scope, not yet assigned)
                sym->funcArguments[j] = current->id;
                current->assignToFunc = true;
                j++;
            }
            current = current->next;
        }
        sym->funcArgCount = j;
    }
    sym->next = symbolTable; // head of list
    symbolTable = sym;
    return sym->id;
}

int  lookupSymbol(const char* name, bool is_assignment, int line_number) {
    Symbol* current = symbolTable;
    while (current) {
        if (strcmp(current->name, name) == 0 && current->scopeActive) {
            // If it's a variable (not a function) and not initialized
            if (strcmp(current->type, "variable") == 0 && !current->isInitialized) {
                if (!is_assignment) {
                    printf("Error at line %d: %s used before initialization\n", line_number, name);
                    exit(EXIT_FAILURE);
                }
            }
            if (!is_assignment) {
                current->isUsed = 1;
            }
            return current->id;
        }
        current = current->next;
    }
    
    // If we reach here, the symbol was not found
    printf("Error at line %d: %s undeclared identifier\n", line_number, name);
    exit(EXIT_FAILURE);
}


void enterScope() {
    currentScope++;
}


Symbol* getSymbolById(int id) {
    Symbol* current = symbolTable;
    while (current) {
        if (current->id == id) {
            return current;
        }
        current = current->next;
    }
    return NULL; // Not found
}


void exitScope(int line_number) {
    // First: check if exiting a function that has wrong return behavior
    Symbol* curr = symbolTable;

    while (curr) {
        if (strcmp(curr->type, "function") == 0 && curr->scopeLevel == currentScope) {
            if (strcmp(curr->dType, "void") != 0 &&  !returnInFunction) {
                // Non-void function but no return happened
                printf("Error at line %d: Missing 'return' in Function '%s'\n", line_number, curr->name);
                exit(EXIT_FAILURE);
            }
            if (strcmp(curr->dType, "void") == 0 && returnInFunction) {
                // Void function but return happened with value
                printf("Error at line %d: Void function '%s' cannot have a return value\n", line_number, curr->name);
                exit(EXIT_FAILURE);
            }
        }
        curr = curr->next;
    }

    // Second: mark all symbols in this scope as inactive (not delete)
    returnInFunction = false; // Reset returnInFunction for the next scope
    curr = symbolTable;
    while (curr) {
        if (curr->scopeLevel == currentScope) {
            curr->scopeActive = false;
        }
        curr = curr->next;
    }

    // Third: move one level up
    currentScope--;
}

////////////////////////////////////////////////////////////

void checkIntAssigning(int WSID, int val, int line_number) {
    if (WSID == -1) {
        if (!isPrint) {
            // push_int(val);
        }
        return;
    }

    Symbol* current = getSymbolById(WSID);
    if (current == NULL) {
        printf("Error at line %d: Invalid symbol ID %d\n", line_number, WSID);
        // fprintf(error_file, "Error at line %d: Invalid symbol ID %d\n", line_number, WSID);
        exit(EXIT_FAILURE);
    }

    if ((strcmp(current->dType, "string") == 0 ||
         strcmp(current->dType, "char") == 0) &&
        strcmp(current->type, "function") == 0)
    {
        printf("Error at line %d: function '%s' type is '%s' but assigned 'int'\n", line_number, current->name, current->dType);
        // fprintf(error_file, "Error at line %d: function '%s' type is '%s' but assigned 'int'\n", line_number, current->name, current->dType);
        exit(EXIT_FAILURE);
    }

    current->isInitialized = true;

    if (((strcmp(current->dType, "string") != 0 &&
          strcmp(current->dType, "char") != 0 &&
          strcmp(current->dType, "void") != 0) &&
         current->scopeActive) ||
        isParameter)
    {
        if (strcmp(current->dType, "float") == 0) {
            if (!isPrint)
                // push_float((float)val);
                printf("");
            }
            else if (strcmp(current->dType, "bool") == 0) {
                if (!isPrint)
                // push_int((bool)val);
                printf("");
            }
            else if (strcmp(current->dType, "int") == 0) {
                if (!isPrint)
                printf("");
                // push_int(val);
        }
    }
    else {
        printf("Error at line %d: %s '%s' variable assigned 'int' value\n", line_number, current->name, current->dType);
        // fprintf(error_file, "Error at line %d: %s '%s' variable assigned 'int' value\n", line_number, current->name, current->dType);
        exit(EXIT_FAILURE);
    }

    if (isParameter == 1) {
        workingSymbolID = -1;
    }
}

void checkFloatAssigning(int WSID, float val, int line_number) {
    if (WSID == -1) {
        if (!isPrint) {
            // push_float(val);
        }
        return;
    }

    Symbol* current = getSymbolById(WSID);
    if (current == NULL) {
        printf("Error at line %d: Invalid symbol ID %d\n", line_number, WSID);
        // fprintf(error_file, "Error at line %d: Invalid symbol ID %d\n", line_number, WSID);
        exit(EXIT_FAILURE);
    }

    if ((strcmp(current->dType, "string") == 0 ||
         strcmp(current->dType, "char") == 0) &&
        strcmp(current->type, "function") == 0)
    {
        printf("Error at line %d: function '%s' type is '%s' but assigned 'float'\n", line_number, current->name, current->dType);
        // fprintf(error_file, "Error at line %d: function '%s' type is '%s' but assigned 'float'\n", line_number, current->name, current->dType);
        exit(EXIT_FAILURE);
    }

    current->isInitialized = true;

    if (((strcmp(current->dType, "string") != 0 &&
          strcmp(current->dType, "char") != 0 &&
          strcmp(current->dType, "void") != 0) &&
         current->scopeActive) ||
        isParameter)
    {
        if (strcmp(current->dType, "float") == 0) {
            if (!isPrint)
                // push_float(val);
                printf("");
        }
        else if (strcmp(current->dType, "int") == 0) {
            if (!isPrint)
                // push_int((int)val);
                printf("");
        }
        else if (strcmp(current->dType, "bool") == 0) {
            if (!isPrint)
                // push_int((bool)val);
                printf("");
        }
    }
    else {
        printf("Error at line %d: %s '%s' variable assigned 'float' value\n", line_number, current->name, current->dType);
        // fprintf(error_file, "Error at line %d: %s '%s' variable assigned 'float' value\n", line_number, current->name, current->dType);
        exit(EXIT_FAILURE);
    }

    if (isParameter == 1) {
        workingSymbolID = -1;
    }
}

void checkBoolAssigning(int WSID, bool val, int line_number) {
    if (WSID == -1) {
        if (!isPrint) {
            // push_int(val);
        }
        return;
    }

    Symbol* current = getSymbolById(WSID);
    if (current == NULL) {
        printf("Error at line %d: Invalid symbol ID %d\n", line_number, WSID);
        // fprintf(error_file, "Error at line %d: Invalid symbol ID %d\n", line_number, WSID);
        exit(EXIT_FAILURE);
    }

    if ((strcmp(current->dType, "string") == 0 ||
         strcmp(current->dType, "char") == 0) &&
        strcmp(current->type, "function") == 0)
    {
        printf("Error at line %d: function '%s' type is '%s' but assigned 'bool'\n", line_number, current->name, current->dType);
        // fprintf(error_file, "Error at line %d: function '%s' type is '%s' but assigned 'bool'\n", line_number, current->name, current->dType);
        exit(EXIT_FAILURE);
    }

    current->isInitialized = true;

    if (((strcmp(current->dType, "string") != 0 &&
          strcmp(current->dType, "char") != 0 &&
          strcmp(current->dType, "void") != 0) &&
         current->scopeActive) ||
        isParameter)
    {
        if (strcmp(current->dType, "float") == 0) {
            if (!isPrint)
                // push_float((float)val);
                printf("");
        }
        else if (strcmp(current->dType, "bool") == 0) {
            if (!isPrint)
                // push_int(val);
                printf("");
        }
        else if (strcmp(current->dType, "int") == 0) {
            if (!isPrint)
                // push_int((int)val);
                printf("");
        }
    }
    else {
        printf("Error at line %d: %s '%s' variable assigned 'bool' value\n", line_number, current->name, current->dType);
        // fprintf(error_file, "Error at line %d: %s '%s' variable assigned 'bool' value\n", line_number, current->name, current->dType);
        exit(EXIT_FAILURE);
    }

    if (isParameter == 1) {
        workingSymbolID = -1;
    }
}

void checkStringAssigning(int WSID, char* val, int line_number) {
    if (WSID == -1) {
        if (!isPrint) {
            // push_string(val);
        }
        return;
    }

    Symbol* current = getSymbolById(WSID);
    if (current == NULL) {
        printf("Error at line %d: Invalid symbol ID %d\n", line_number, WSID);
        // fprintf(error_file, "Error at line %d: Invalid symbol ID %d\n", line_number, WSID);
        exit(EXIT_FAILURE);
    }

    if (strcmp(current->dType, "string") != 0 &&
        strcmp(current->type, "function") == 0)
    {
        printf("Error at line %d: function '%s' type is '%s' but assigned 'string'\n", line_number, current->name, current->dType);
        // fprintf(error_file, "Error at line %d: function '%s' type is '%s' but assigned 'string'\n", line_number, current->name, current->dType);
        exit(EXIT_FAILURE);
    }

    current->isInitialized = true;

    if ((strcmp(current->dType, "string") == 0 &&
         current->scopeActive) ||
        isParameter)
    {
        if (!isPrint) {
            // push_string(val);
            printf("");
        }
    }
    else {
        printf("Error at line %d: %s '%s' variable assigned 'string' value\n", line_number, current->name, current->dType);
        // fprintf(error_file, "Error at line %d: %s '%s' variable assigned 'string' value\n", line_number, current->name, current->dType);
        exit(EXIT_FAILURE);
    }

    if (isParameter == 1) {
        workingSymbolID = -1;
    }
}
void checkCharAssigning(int WSID, char *val, int line_number) {
    printf("checkCharAssigning baba \n");
    if (WSID == -1) {
        if (!isPrint) {
            // push_string(val);
        }
        return;
    }

    Symbol* current = getSymbolById(WSID);
    if (current == NULL) {
        printf("Error at line %d: Invalid symbol ID %d\n", line_number, WSID);
        // fprintf(error_file, "Error at line %d: Invalid symbol ID %d\n", line_number, WSID);
        exit(EXIT_FAILURE);
    }

    if (strcmp(current->dType, "char") != 0 &&
        strcmp(current->type, "function") == 0)
    {
        printf("Error at line %d: function '%s' type is '%s' but assigned 'char'\n", line_number, current->name, current->dType);
        // fprintf(error_file, "Error at line %d: function '%s' type is '%s' but assigned 'string'\n", line_number, current->name, current->dType);
        exit(EXIT_FAILURE);
    }

    current->isInitialized = true;

    if ((strcmp(current->dType, "char") == 0 &&
         current->scopeActive) ||
        isParameter)
    {
        if (!isPrint) {
            // push_string(val);
            printf("");
        }
    }
    else {
        printf("Error at line %d: %s '%s' variable assigned 'char' value\n", line_number, current->name, current->dType);
        // fprintf(error_file, "Error at line %d: %s '%s' variable assigned 'string' value\n", line_number, current->name, current->dType);
        exit(EXIT_FAILURE);
    }

    if (isParameter == 1) {
        workingSymbolID = -1;
    }
}

void checkVariableType(int i, int line_number) {
    if (isParameter == 1) {
        Symbol* calledFunc = getSymbolById(calledFuncIndex);
        if (funcArgCount < calledFunc->funcArgCount) {
            workingSymbolID = calledFunc->funcArguments[funcArgCount];
        } else {
            workingSymbolID = -1;
        }
    }

    if (i == -1 || workingSymbolID == -1) {
        return;
    }

    Symbol* current = getSymbolById(i);
    Symbol* target = getSymbolById(workingSymbolID);

    if (strcmp(current->dType, target->dType) != 0 &&
        ((strcmp(target->dType, "string") == 0 || strcmp(current->dType, "string") == 0) ||
         (strcmp(target->dType, "char") == 0 || strcmp(current->dType, "char") == 0))) {
        if (strcmp(current->type, "function") == 0) {
            printf("Error at line %d: %s '%s' variable but %s type is '%s'\n", line_number, target->name, target->dType, current->name, current->dType);
            exit(EXIT_FAILURE);
        } else if (strcmp(target->type, "function") == 0) {
            printf("Error at line %d: %s '%s' variable but %s type is '%s'\n", line_number, current->name, current->dType, target->name, target->dType);
            exit(EXIT_FAILURE);
        } else if (isParameter == 1) {
            printf("Error at line %d: Incorrect argument type %s is %s variable but %s %s\n", line_number, target->name, target->dType, current->name, current->dType);
            exit(EXIT_FAILURE);
        } else {
            printf("Error at line %d: %s is %s variable but %s %s\n", line_number, target->name, target->dType, current->name, current->dType);
            exit(EXIT_FAILURE);
        }
    } else if (strcmp(target->type, "function") != 0) {
        target->isInitialized = true;
    }

    if (isParameter == 0) {
        workingSymbolID = -1;
    }
}
void checkParameterType(const char *datatype, int line_number) {
    if (isParameter == 1) {
        Symbol *calledFunc = getSymbolById(calledFuncIndex);
        if (funcArgCount < calledFunc->funcArgCount) {
            workingSymbolID = calledFunc->funcArguments[funcArgCount];
        } else {
            workingSymbolID = -1;
        }
    }

    if (workingSymbolID == -1) {
        return;
    }

    Symbol *target = getSymbolById(workingSymbolID);

    if (strcmp(datatype, target->dType) != 0 &&
        ((strcmp(target->dType, "string") == 0 || strcmp(datatype, "string") == 0) ||
         (strcmp(target->dType, "char") == 0 || strcmp(datatype, "char") == 0))) {
        if (isParameter == 1) {
            printf("Error at line %d: Incorrect argument type %s is %s variable but assigned to %s value\n",
                   line_number, target->name, target->dType, datatype);
            exit(EXIT_FAILURE);
        }
    }
}

void checkArgCount(int funcID, int line_number) {
    Symbol* funcSymbol = getSymbolById(funcID);
    if (funcSymbol == NULL || strcmp(funcSymbol->type, "function") != 0) {
        printf("Error at line %d: Symbol with ID %d is not a valid function.\n", line_number, funcID);
        exit(EXIT_FAILURE);
    }

    if (funcArgCount > funcSymbol->funcArgCount) {
        printf("Error at line %d: Too many arguments for function call '%s'. Expected %d, got %d.\n",
               line_number, funcSymbol->name, funcSymbol->funcArgCount, funcArgCount);
        exit(EXIT_FAILURE);
    } else if (funcArgCount < funcSymbol->funcArgCount) {
        printf("Error at line %d: Too few arguments for function call '%s'. Expected %d, got %d.\n",
               line_number, funcSymbol->name, funcSymbol->funcArgCount, funcArgCount);
        exit(EXIT_FAILURE);
    }
}

void checkFunctionReturnType(int funcID, const char* returnType, int line_number) {
    Symbol* funcSymbol = getSymbolById(funcID);

    if (strcmp(funcSymbol->dType, returnType) != 0) {
        if (strcmp(funcSymbol->dType, "void") == 0) {
            printf("Error at line %d: Void function '%s' cannot return a value.\n",
                   line_number, funcSymbol->name);
        } else {
            printf("Error at line %d: Function '%s' expected return type '%s', but got '%s'.\n",
                   line_number, funcSymbol->name, funcSymbol->dType, returnType);
        }
        exit(EXIT_FAILURE);
    }

    returnInFunction = true; // Mark that a return statement has been encountered in the function
}


void checkContinue(int line_number) {
    if (!inLoop) {
        printf("Error at line %d: 'continue'statement not inside a loop.\n", line_number);
        exit(EXIT_FAILURE);
    }
}

void checkBreak(int line_number) {
    if (!inLoop && !inSwitch) {
        printf("Error at line %d: 'Break' statement not inside a loop nor switch.\n", line_number);
        exit(EXIT_FAILURE);
    }
    // if (!inSwitch) {
    //     printf("Error at line %d: 'Break' statement not inside a loop.\n", line_number);
    //     exit(EXIT_FAILURE);
    // }
}
////////////////////////////////////////////////////////////

void markInitialized(int id) {
    Symbol* current = getSymbolById(id);
    if (current == NULL) {
        printf("Error: Invalid symbol ID %d\n", id);
        exit(EXIT_FAILURE);
    }
    current->isInitialized = 1;
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


void DisplayTheSymbolTable() {
    printf("Symbol Table:\n");
    printf("---------------------------------------------------------------------------------------------\n");
    printf("| %-10s | %-10s | %-10s | %-5s | %-5s | %-5s | %-12s | %-8s |\n", 
           "Name", "Type", "DataType", "ID", "Scope", "Active", "Initialized", "Used");
    printf("---------------------------------------------------------------------------------------------\n");

    Symbol* current = symbolTable;
    while (current) {
        printf("| %-10s | %-10s | %-10s | %-5d | %-5d | %-5s | %-12s | %-8s |\n", 
               current->name, current->type, current->dType, 
               current->id, current->scopeLevel, 
               current->scopeActive ? "Yes" : "No",
               current->isInitialized ? "Yes" : "No",
               current->isUsed ? "Yes" : "No");
        current = current->next;
    }
    printf("---------------------------------------------------------------------------------------------\n");
}

void displayUnusedVariables() {
    Symbol* current = symbolTable;
    while (current) {
        if (!current->isUsed) {
            if (strcmp(current->type, "function") == 0) {
                printf("Warning: Function '%s' declared but never used (ID: %d, Scope: %d).\n", 
                       current->name, current->id, current->scopeLevel);
            } else if (current->scopeLevel > 0) {
                printf("Warning: Variable '%s' declared but never used (ID: %d, Scope: %d).\n", 
                       current->name, current->id, current->scopeLevel);
            }
        }
        current = current->next;
    }
}



void check_memory(void *ptr) {
    if (!ptr) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
}
///////////////////////////////////////////////////////////
nodeType *set_type(char *type)
{
    nodeType *p = (nodeType *)malloc(sizeof(nodeType));
    check_memory(p);
    p->type = type;
    return p;
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
        printf("Unary minus operator\n");
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

nodeType* inc_dec_checker(nodeType* op, int line_number) {
    nodeType* result = (nodeType*) malloc(sizeof(nodeType));
    check_memory(result);

    if (strcmp(op->type, "int") != 0 && strcmp(op->type, "float") != 0) {
        fprintf(stderr, "Error at line %d: '++' and '--' not applicable to type '%s'.\n", line_number, op->type);
        exit(EXIT_FAILURE);
    }

    result->type = strdup(op->type); // Keep the same type
    return result;
}

nodeType *boolean_operator_checker(nodeType *op1, nodeType *op2, int line_number) {
    // Handles: &&, ||, <, <=, >, >=, ==, !=, =

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