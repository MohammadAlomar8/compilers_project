%{
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "symbol_table.cpp"

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
    struct nodeType *nodeptr;
}

/* Tokens */
%token <string_value> INT FLOAT STRING CHAR BOOL CONSTANT
%token IF ELSE FOR WHILE DO SWITCH CASE DEFAULT BREAK RETURN VOID
%token PRINT IDENTIFIER FUNCTION_KEY
%token INT_VALUE FLOAT_VALUE STRING_VALUE BOOL_VALUE CHAR_VALUE
%token LOGICAL_AND LOGICAL_OR LOGICAL_NOT
%token EQUAL NOT_EQUAL GT LT GTE LTE
%token EQ LPAREN RPAREN LBRACE RBRACE
%token SEMICOLON
%token ADD SUB MUL DIV MOD POW INC DEC
%token BITWISE_OR BITWISE_AND SHL SHR

/* Type Declarations */
%type <string_value> type IDENTIFIER
%type <int_value> INT_VALUE
%type <float_value> FLOAT_VALUE
%type <string_value> STRING_VALUE CHAR_VALUE
%type <bool_value> BOOL_VALUE
%type <nodeptr> expression fun_call return_statment declaration_statement BREAK LOGICAL_NOT RETURN SUB LPAREN RPAREN ADD


/////////////////////////////////////////////////////
%left LOGICAL_OR LOGICAL_AND 
%left EQUAL NOT_EQUAL
%left GT LT GTE LTE
%left ADD SUB
%left MUL DIV MOD
%right POW LOGICAL_NOT
%left SHL SHR

%%

program:
     program statement
     |
    // comment
    ;

type:
    INT { $$ = strdup("int"); }
    | FLOAT { $$ = strdup("float"); }
    | STRING { $$ = strdup("string"); }
    | BOOL { $$ = strdup("bool"); }
    | CHAR { $$ = strdup("char"); }
    ;

statement:
    declaration_statement
    | assignment_statement
    | print_statement
    | expression SEMICOLON
    | BREAK SEMICOLON
    | if_statement
    | for_statement
    | while_statement
    | do_while_statement
    | inc_dec_statement
    | block
    | switch_statement
    | return_statment
    | function_statment
    ;

declaration_statement:
    type IDENTIFIER {workingSymbolID = insertSymbol($2,"variable",$1,yylineno,0 );} EQ expression SEMICOLON {workingSymbolID = -1;}
    
    | type IDENTIFIER {workingSymbolID = insertSymbol($2,"variable",$1,yylineno,0 );} SEMICOLON {workingSymbolID = -1;}            
    
    | type CONSTANT {workingSymbolID = insertSymbol($2,"constant",$1,yylineno,0 );} EQ expression SEMICOLON {workingSymbolID = -1;}   
    
    // | type CONSTANT {workingSymbolID = insertSymbol($2,"constant",$1,yylineno,0 );} SEMICOLON  {workingSymbolID = -1;}             
    
    ;

assignment_statement:
    IDENTIFIER EQ {workingSymbolID = lookupSymbol($1, 1, yylineno)} expression SEMICOLON  
    
    | CONSTANT EQ expression SEMICOLON {printf("Error at line: %d CONSTANTS must not be reassigned\n", yylineno);exit(EXIT_FAILURE);insertResult = -1;}
    
    ;

///////////////////// switch ///////////////
switch_statement:
    SWITCH LPAREN IDENTIFIER RPAREN LBRACE cases RBRACE
    ;

cases:
    CASE expression ':' block cases  {printf("parsing case \n")}
    | default_case
    |
    ;

default_case:     
    DEFAULT ':' block    {printf("parsing default \n")}
    ;
///////////////////////////////////////////


print_statement:
    PRINT LPAREN expression RPAREN SEMICOLON {printf("parsing print 1\n")}
    | PRINT LPAREN RPAREN SEMICOLON {printf("parsing print 2\n")}
    ;

if_statement:
    IF LPAREN expression RPAREN block                       {printf("parsing if_statement \n")}
    | IF LPAREN expression RPAREN block ELSE block          {printf("parsing if_statement \n")}
    ;

for_statement:
    FOR LPAREN statement statement statement RPAREN block  {printf("parsing for_statement \n")}
    ;

// -------------------------- function things ----------------------------
function_statment: 
    type FUNCTION_KEY IDENTIFIER LPAREN args_statment RPAREN      block
                                       
    | VOID FUNCTION_KEY IDENTIFIER LPAREN args_statment RPAREN    block 
    
    | type FUNCTION_KEY IDENTIFIER LPAREN RPAREN          block                                   
    | VOID FUNCTION_KEY IDENTIFIER LPAREN RPAREN          block 
    
    ;

args_statment:
                args_dec ',' args_statment
                | args_dec
                ;
args_dec:
                type IDENTIFIER                             
                | type IDENTIFIER EQ expression                             
                ; 
fun_call:
    IDENTIFIER {funcArgCount=0; calledFuncIndex = lookup($1, 0, yylineno); check_variable_type(calledFuncIndex, yylineno);}  LPAREN fun_arg_call RPAREN  
    
    | IDENTIFIER LPAREN RPAREN  
    
    ;

fun_arg_call:
    expression {funcArgCount++;} ',' fun_arg_call {printf("parsing fun arg call  \n")}
    | expression {funcArgCount++;}               
    ;

return_statment:
    RETURN SEMICOLON
    | RETURN expression SEMICOLON
// -------------------------- function ----------------------------


// --------------------------- while things -------------------------------
while_statement:
    WHILE LPAREN expression RPAREN block    {printf("parsing while statment \n")}
    ;

do_while_statement:
    DO block WHILE LPAREN expression RPAREN SEMICOLON   {printf("parsing do while statment \n")}
    ;
// ----------------------------while ------------------------------------

inc_dec_statement:
    IDENTIFIER INC SEMICOLON
    | IDENTIFIER DEC SEMICOLON
    | IDENTIFIER INC 
    | IDENTIFIER DEC 
    ;

block:
    LBRACE {enterScope();} program RBRACE   { exitScope(yylineno); }
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
    | ADD expression
    | expression SUB expression
    | SUB expression
    | expression MUL expression
    | expression DIV expression
    | expression MOD expression
    | expression POW expression
    | expression SHL expression
    | expression SHR expression
    | LOGICAL_NOT expression
    // | IDENTIFIER
    // | CONSTANT 
    | INT_VALUE {$$ = set_type("int"),checkIntAssigning(workingSymbolID, $1, yylineno);}
    | FLOAT_VALUE {$$ = set_type("float"),checkFloatAssigning(workingSymbolID, $1, yylineno);}
    | STRING_VALUE {$$ = set_type("string"),checkStringAssigning(workingSymbolID, $1, yylineno);}
    | CHAR_VALUE {$$ = set_type("char"),checkChargAssigning(workingSymbolID, $1, yylineno);}
    | BOOL_VALUE {$$ = set_type("bool"),checkBool0Assigning(workingSymbolID, $1, yylineno);}
    | LPAREN expression RPAREN
    | fun_call
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
        printSymbolTable();
        printf("\nParsing completed successfully!\n");
    } else {
        fprintf(stderr, "\nParsing failed with %d errors.\n", parse_result);
    }
    
    fclose(inputFile);
    return parse_result;
}