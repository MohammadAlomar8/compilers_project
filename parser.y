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
%token INT FLOAT STRING CHAR BOOL
%token IF ELSE FOR WHILE DO SWITCH CASE DEFAULT BREAK RETURN VOID
%token PRINT

%token LOGICAL_AND LOGICAL_OR LOGICAL_NOT
%token EQUAL NOT_EQUAL GT LT GTE LTE
%token EQ SEMICOLON COMMA LPAREN RPAREN LBRACE RBRACE

%token ADD SUB MUL DIV MOD POW INC DEC
%token BITWISE_OR BITWISE_AND SHL SHR

%token IDENTIFIER INT_VALUE FLOAT_VALUE CHAR_VALUE STRING_VALUE BOOL_VALUE CONSTANT

/* Operator precedence */
%left LOGICAL_OR
%left LOGICAL_AND
%left EQUAL NOT_EQUAL
%left GT LT GTE LTE
%left ADD SUB
%left MUL DIV MOD
%right POW
%left UNARY
%right INC DEC

%%

program:
    statement_list
    ;

statement_list:
    statement
    | statement_list statement
    ;

statement:
      declaration_statement
    | assignment_statement
    | print_statement
    | if_statement
    | for_statement
    | while_statement
    | inc_dec_statement
    | block
    ;

declaration_statement:
    type IDENTIFIER EQ expression SEMICOLON
    ;

assignment_statement:
    IDENTIFIER EQ expression SEMICOLON
    ;

print_statement:
    PRINT LPAREN expression RPAREN SEMICOLON
    ;

if_statement:
    IF LPAREN expression RPAREN block
    | IF LPAREN expression RPAREN block ELSE block
    ;

for_statement:
    FOR LPAREN for_init SEMICOLON for_cond SEMICOLON for_iter RPAREN block
    ;

for_init:
    declaration_statement
    | assignment_statement
    | /* empty */
    ;

for_cond:
    expression
    | /* empty */
    ;

for_iter:
    expression
    | /* empty */
    ;

while_statement:
    WHILE LPAREN expression RPAREN block
    ;

inc_dec_statement:
    IDENTIFIER INC SEMICOLON
    | IDENTIFIER DEC SEMICOLON
    ;

block:
    LBRACE statement_list RBRACE
    ;

type:
    INT
    | FLOAT
    | STRING
    | BOOL
    | CHAR
    ;

expression:
    logical_or_expression
    ;

logical_or_expression:
    logical_and_expression
    | logical_or_expression LOGICAL_OR logical_and_expression
    ;

logical_and_expression:
    equality_expression
    | logical_and_expression LOGICAL_AND equality_expression
    ;

equality_expression:
    relational_expression
    | equality_expression EQUAL relational_expression
    | equality_expression NOT_EQUAL relational_expression
    ;

relational_expression:
    additive_expression
    | relational_expression GT additive_expression
    | relational_expression LT additive_expression
    | relational_expression GTE additive_expression
    | relational_expression LTE additive_expression
    ;

additive_expression:
    multiplicative_expression
    | additive_expression ADD multiplicative_expression
    | additive_expression SUB multiplicative_expression
    ;

multiplicative_expression:
    unary_expression
    | multiplicative_expression MUL unary_expression
    | multiplicative_expression DIV unary_expression
    | multiplicative_expression MOD unary_expression
    ;

unary_expression:
    postfix_expression
    | SUB unary_expression %prec UNARY
    | LOGICAL_NOT unary_expression
    ;

postfix_expression:
    primary_expression
    | postfix_expression INC
    | postfix_expression DEC
    ;

primary_expression:
    INT_VALUE
    | FLOAT_VALUE
    | STRING_VALUE
    | BOOL_VALUE
    | CHAR_VALUE
    | IDENTIFIER
    | LPAREN expression RPAREN
    ;

%%

void yyerror(const char *s) {
    extern char *yytext;
    fprintf(stderr, "\nError at line %d: %s\n", yylineno, s);
    fprintf(stderr, "Near token: '%s'\n", yytext);
    
    // Print the line with error
    extern FILE *yyin;
    long pos = ftell(yyin);
    fseek(yyin, 0, SEEK_SET);
    
    char line[1024];
    int current_line = 1;
    while (fgets(line, sizeof(line), yyin)) {
        if (current_line == yylineno) {
            fprintf(stderr, "Line %d: %s", yylineno, line);
            
            // Show caret under the error position
            int i;
            for (i = 0; i < strlen(line) && line[i] != '\n'; i++) {
                if (i == strlen(yytext)) {
                    fprintf(stderr, "^");
                    break;
                } else {
                    fprintf(stderr, " ");
                }
            }
            fprintf(stderr, "\n");
            break;
        }
        current_line++;
    }
    fseek(yyin, pos, SEEK_SET);
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