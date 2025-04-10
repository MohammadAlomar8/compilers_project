%{
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void yyerror(const char *s);
int yylex(void);
extern int yylineno;

char* strdup(const char* s) {
    char* d = malloc(strlen(s) + 1);
    if (d) strcpy(d, s);
    return d;
}
%}

%union {
    int int_value;
    float float_value;
    char* string_value;
    int bool_value;
}

/* Tokens */
%token INT FLOAT STRING CHAR BOOL CONSTANT
%token IF ELSE FOR WHILE DO SWITCH CASE DEFAULT BREAK RETURN VOID
%token PRINT IDENTIFIER FUNCTION_KEY
%token INT_VALUE FLOAT_VALUE STRING_VALUE BOOL_VALUE
%token LOGICAL_AND LOGICAL_OR LOGICAL_NOT
%token EQUAL NOT_EQUAL GT LT GTE LTE
%token EQ COMMA LPAREN RPAREN LBRACE RBRACE
%token ENUM SEMICOLON
%token ADD SUB MUL DIV MOD POW INC DEC
%token BITWISE_OR BITWISE_AND SHL SHR


%left LOGICAL_OR LOGICAL_AND
%left EQUAL NOT_EQUAL
%left GT LT GTE LTE
%left ADD SUB
%left MUL DIV MOD
%right POW
%left SHL SHR

%%

program:
     program statement
     |
    // comment
    ;

type:
    INT
    | FLOAT
    | STRING
    | BOOL
    | CHAR
    ;

statement:
    declaration_statement
    | assignment_statement
    | print_statement
    | expression SEMICOLON
    | if_statement
    | for_statement
    | while_statement
    | inc_dec_statement
    | block
    | return_statment
    | enum_decleration_statment
    | function_statment
    ;

declaration_statement:
    type IDENTIFIER EQ expression SEMICOLON {printf("parsing declaration_statement 1 \n")}
    | type IDENTIFIER SEMICOLON             {printf("parsing declaration_statement 2 \n")}
    | type CONSTANT EQ expression SEMICOLON   {printf("parsing declaration_statement 3 \n")}
    | type CONSTANT SEMICOLON               {printf("parsing declaration_statement 4 \n")}
    ;

assignment_statement:
    IDENTIFIER EQ expression SEMICOLON  {printf("parsing assign \n")}
    ;


///////////////////// enum ////
enum_decleration_statment:
    ENUM IDENTIFIER '{' enum_helper '}'
    | IDENTIFIER IDENTIFIER EQ IDENTIFIER SEMICOLON
    | IDENTIFIER IDENTIFIER SEMICOLON
    ;

enum_helper:
    enum_args
    | enum_defined_args
    ;

enum_args:
    IDENTIFIER ',' enum_args
    | IDENTIFIER
    ;

enum_defined_args:
    IDENTIFIER EQ INT_VALUE ',' enum_defined_args
    | IDENTIFIER EQ INT_VALUE
    ;
///////////////////////////////


print_statement:
    PRINT LPAREN expression RPAREN SEMICOLON {printf("parsing print \n")}
    ;

if_statement:
    IF LPAREN expression RPAREN block
    | IF LPAREN expression RPAREN block ELSE block          {printf("parsing if_statement \n")}
    ;

for_statement:
    FOR LPAREN statement statement statement RPAREN block  {printf("parsing for_statement \n")}
    ;


function_statment: 
    type FUNCTION_KEY IDENTIFIER LPAREN args_statment RPAREN      block                                   
    | VOID FUNCTION_KEY IDENTIFIER LPAREN args_statment RPAREN    block 
    | type FUNCTION_KEY IDENTIFIER LPAREN RPAREN          block                                   
    | VOID FUNCTION_KEY IDENTIFIER LPAREN RPAREN          block 
    ;

args_statment:
                ARG_DECL ',' args_statment
                | ARG_DECL
                ;
ARG_DECL:
                type IDENTIFIER                             
                ;


return_statment:
    RETURN SEMICOLON
    | RETURN expression SEMICOLON

while_statement:
    WHILE LPAREN expression RPAREN block {printf("parsing while statment \n")}
    ;

inc_dec_statement:
    IDENTIFIER INC SEMICOLON
    | IDENTIFIER DEC SEMICOLON
    | IDENTIFIER INC 
    | IDENTIFIER DEC 
    ;

block:
    LBRACE program RBRACE
    ;



expression:
    expression LOGICAL_OR expression
    | expression LOGICAL_AND expression
    | expression EQUAL expression
    | expression NOT_EQUAL expression
    | expression GT expression
    | expression LT expression
    | expression GTE expression
    | expression LTE expression
    | expression ADD expression
    | expression SUB expression
    | expression MUL expression
    | expression DIV expression
    | expression MOD expression
    | expression POW expression
    | expression SHL expression
    | expression SHR expression
    | IDENTIFIER
    | CONSTANT
    | INT_VALUE
    | FLOAT_VALUE
    | STRING_VALUE
    | BOOL_VALUE
    | LPAREN expression RPAREN
    ;




%%

void yyerror(const char *s) {
    extern char *yytext;
    fprintf(stderr, "\nError at line %d: %s\n", yylineno, s);
    fprintf(stderr, "Near token: '%s'\n", yytext);
    
}

int yywrap() {
    return 1;
}

int main(int argc, char** argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    FILE* inputFile = fopen(argv[1], "r");
    if (!inputFile) {
        perror("Failed to open file");
        return 1;
    }

    extern FILE* yyin;
    yyin = inputFile;

    printf("Starting parsing of %s...\n", argv[1]);
    int parse_result = yyparse();
    
    if (parse_result == 0) {
        printf("\nParsing completed successfully!\n");
    } else {
        fprintf(stderr, "\nParsing failed with %d errors.\n", parse_result);
    }

    fclose(inputFile);
    return parse_result;
}