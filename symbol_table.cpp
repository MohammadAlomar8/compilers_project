#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 64
#define MAX_TYPE_LEN 16

typedef struct Symbol {
    char name[MAX_NAME_LEN];
    char type[MAX_TYPE_LEN];
    int isInitialized;
    int isUsed;
    int scopeLevel;
    struct Symbol* next;
} Symbol;

Symbol* symbolTable = NULL;
int currentScope = 0;
void insertSymbol(const char* name, const char* type) {
    // Check for redeclaration in the same scope
    Symbol* existing = symbolTable;
    while (existing) {
        if (strcmp(existing->name, name) == 0 && existing->scopeLevel == currentScope) {
            printf("Semantic Error: Variable '%s' redeclared in the same scope.\n", name);
            return;
        }
        existing = existing->next;
    }

    Symbol* sym = (Symbol*)malloc(sizeof(Symbol));
    strncpy(sym->name, name, MAX_NAME_LEN);
    strncpy(sym->type, type, MAX_TYPE_LEN);
    sym->isInitialized = 0;
    sym->isUsed = 0;
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
    if (sym) sym->isInitialized = 1;
}

void markUsed(const char* name) {
    Symbol* sym = lookupSymbol(name);
    if (sym) sym->isUsed = 1;
}
void printSymbolTable() {
    printf("------ SYMBOL TABLE ------\n");
    Symbol* current = symbolTable;
    while (current) {
        printf("Name: %s, Type: %s, Init: %d, Used: %d, Scope: %d\n",
            current->name, current->type, current->isInitialized,
            current->isUsed, current->scopeLevel);
        current = current->next;
    }
}
int main(){
    return 0;
}