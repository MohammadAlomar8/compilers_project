#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
FILE* quad_file = NULL;
int tempCounter = 0;
char* quad_file_path = NULL;
char* first_operand = NULL;
char* second_operand = NULL;
char loop_label [10];
char exit_loop_label [10];
int loop_counter = 0;
int exit_loop_counter = 0;
FILE *create_file(char *path)
{
    FILE *file = fopen(path, "w");
    if (file == NULL)
    {
        printf("Error: File %s not found\n", path);
        exit(0);
    }
    return file;
}

void set_file_path(char *filePath, FILE *file)
{
    quad_file_path = filePath;
    quad_file = file;
}

void writeQuadruple(FILE *quad_file ,const char* operation, const char* op1, const char* op2, const char* result) {
    if (quad_file) {
        fprintf(quad_file, "%s, %s, %s, %s\n", 
            operation, 
            op1, 
            (op2 == NULL || strlen(op2) == 0) ? "--" : op2, 
            result);
        } else {
            fprintf(stderr, "Error: File is not open for writing.\n");
        }
    }

    char* createTemp() {
        static char tempName[20];
        sprintf(tempName, "temp%d", tempCounter++);
        return tempName;
    }
    
    void processExpression(FILE * quad_file,const char* op1, const char* op2, const char* result, const char* operation) {
        // char* temp = createTemp();
        writeQuadruple(quad_file, operation, op1, op2, result);
        // writeQuadruple(quad_file, operation, result, op2, temp);
        // writeQuadruple(quad_file, "ASSIGN", temp, "--", result);
    }
    
    void writeIfConditionQuadruples(FILE *quad_file, const char* condOp, const char* left, const char* right, const char* labelFalseJump) {
        if (!quad_file) {
            fprintf(stderr, "Error: File is not open for writing.\n");
            return;
        }
    
        char* temp = createTemp(); 
        writeQuadruple(quad_file, "IF_FALSE", temp, "--", labelFalseJump);
    }
    

    void writeIfEndLabel(FILE *quad_file, const char* label) {
        if (!quad_file) {
            fprintf(stderr, "Error: File is not open for writing.\n");
            return;
        }
    
        fprintf(quad_file, "LABEL, --, --, %s\n", label);
    }

