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
int loop_counter = 0;
// Function to open a file for writing
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
// Function to write a quadruple to the file
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
    
    // Function to create a temporary variable name (like t0, t1, t2, etc.)
    char* createTemp() {
        static char tempName[20]; // Enough space for "t" + number
        sprintf(tempName, "temp%d", tempCounter++);
        return tempName;
    }
    
    // Function to process an expression and write quadruples
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
    
        // Generate temp variable to store result of comparison
        char* temp = createTemp(); // assumes you have createTemp() implemented
    
        // Comparison operation (e.g., <, >, ==)
       // writeQuadruple(quad_file, condOp, left, right, temp);
    
        // If the condition is false, jump to labelFalseJump
        writeQuadruple(quad_file, "IF_FALSE", temp, "--", labelFalseJump);
    }
    

    void writeIfEndLabel(FILE *quad_file, const char* label) {
        if (!quad_file) {
            fprintf(stderr, "Error: File is not open for writing.\n");
            return;
        }
    
        // Emit a label (used to mark the end of IF or start of ELSE)
        fprintf(quad_file, "LABEL, --, --, %s\n", label);
    }
    


    // Initialize the quad_file in the main function
