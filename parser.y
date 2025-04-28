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
%token IF ELSE FOR WHILE DO SWITCH CASE DEFAULT BREAK RETURN VOID CONTINUE
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
%type <nodeptr> expression fun_call_with_args fun_call_no_args fun_call return_statment declaration_statement CONTINUE BREAK LOGICAL_NOT RETURN INC DEC SUB LPAREN RPAREN ADD inc_dec_statement


/////////////////////////////////////////////////////
%left LOGICAL_OR LOGICAL_AND 
%left EQUAL NOT_EQUAL
%left GT LT GTE LTE
%left ADD SUB 
%left MUL DIV MOD
%right POW LOGICAL_NOT
%left SHL SHR BITWISE_OR BITWISE_AND
%left LPAREN RPAREN

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
    | VOID { $$ = strdup("void"); }
    ;

statement:
    declaration_statement
    | assignment_statement
    | print_statement
    | expression SEMICOLON
    | BREAK SEMICOLON {checkBreak(yylineno);}
    | CONTINUE SEMICOLON {checkContinue(yylineno);}
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
    
    ;

assignment_statement:
    IDENTIFIER EQ {workingSymbolID = lookupSymbol($1, 1, yylineno)} expression SEMICOLON  
    
    | CONSTANT EQ expression SEMICOLON {printf("Error at line: %d CONSTANTS must not be reassigned\n", yylineno);exit(EXIT_FAILURE);workingSymbolID = -1;}
    
    ;

///////////////////// switch ///////////////
switch_statement:
    SWITCH {inSwitch = true;} LPAREN IDENTIFIER {lookupSymbol($4, 0, yylineno);} RPAREN LBRACE cases RBRACE {inSwitch = false;}
    ;

cases:
    CASE expression ':' block cases  //{printf("parsing case \n")}
    | default_case
    |
    ;

default_case:     
    DEFAULT ':' block    //{printf("parsing default \n")}
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
for_block:
     program  
    ;
for_statement:
    FOR LPAREN {enterScope();} statement statement statement RPAREN {inLoop = true;} LBRACE for_block RBRACE {inLoop = false; exitScope(yylineno);} 
    ;

// -------------------------- function things ----------------------------
function_statment: 
    type FUNCTION_KEY IDENTIFIER LPAREN args_statment RPAREN {funIndex = insertSymbol($3,"function", $1, yylineno, 0);}     block
                                       
    // | VOID FUNCTION_KEY IDENTIFIER LPAREN args_statment RPAREN  {funIndex = insertSymbol($3,"function", $1, yylineno, 0);}   block 
    
    | type FUNCTION_KEY IDENTIFIER LPAREN RPAREN {funIndex = insertSymbol($3,"function", $1, yylineno, 0);}          block                                   
   // | VOID FUNCTION_KEY IDENTIFIER LPAREN RPAREN   {funIndex = insertSymbol($3,"function", $1, yylineno, 0);}        block 
    
    ;

args_statment:
                args_dec ',' args_statment
                | args_dec
                ;
args_dec:
                type IDENTIFIER {workingSymbolID = insertSymbol($2, "variable", $1, yylineno, 1);}                            
                | type IDENTIFIER EQ expression                             
                ; 


fun_call_with_args:
    IDENTIFIER LPAREN fun_arg_call RPAREN {
        calledFuncIndex = lookupSymbol($1, 0, yylineno);
        $$ = set_type(getSymbolById(calledFuncIndex)->dType);
    }
;

fun_call_no_args:
    IDENTIFIER LPAREN RPAREN {
        calledFuncIndex = lookupSymbol($1, 0, yylineno);
        $$ = set_type(getSymbolById(calledFuncIndex)->dType);
    }
;


fun_call:
    fun_call_with_args 
    | fun_call_no_args
    ;


fun_arg_call:
    expression {funcArgCount++;} ',' fun_arg_call {printf("parsing fun arg call  \n")}
    | expression {funcArgCount++;}               
    ;

return_statment:
    RETURN SEMICOLON
    | RETURN {workingSymbolID = funIndex;} expression SEMICOLON {returnInFunction = true;}
// -------------------------- function ----------------------------


// --------------------------- while things -------------------------------
while_statement:
    WHILE {inLoop = true;} LPAREN expression RPAREN block  {inLoop = false;}    {printf("parsing while statment \n")}
    ;

do_while_statement:
    DO {inLoop = true;} block WHILE LPAREN expression RPAREN SEMICOLON {inLoop = false;}   {printf("parsing do while statment \n")}
    ;
// ----------------------------while ------------------------------------

inc_dec_statement:
    IDENTIFIER INC SEMICOLON  {int id = lookupSymbol($1, false, yylineno);nodeType * temp = create_node(getSymbolById(id)->dType); $$ = inc_dec_checker(temp, yylineno);}
    | IDENTIFIER DEC SEMICOLON  {int id = lookupSymbol($1, false, yylineno);nodeType * temp = create_node(getSymbolById(id)->dType); $$ = inc_dec_checker(temp, yylineno);}
    | IDENTIFIER INC   {int id = lookupSymbol($1, false, yylineno);nodeType * temp = create_node(getSymbolById(id)->dType); $$ = inc_dec_checker(temp, yylineno);}
    | IDENTIFIER DEC   {int id = lookupSymbol($1, false, yylineno);nodeType * temp = create_node(getSymbolById(id)->dType); $$ = inc_dec_checker(temp, yylineno);}
    ;

block:
    LBRACE {enterScope();} program RBRACE   { exitScope(yylineno); }
    ;



expression:
    expression LOGICAL_OR expression {$$ = boolean_operator_checker($1, $3, yylineno);}
    | expression LOGICAL_AND expression {$$ = boolean_operator_checker($1, $3, yylineno);}
    | expression EQUAL expression {$$ = boolean_operator_checker($1, $3, yylineno);}
    | expression NOT_EQUAL expression {$$ = boolean_operator_checker($1, $3, yylineno);}
    | expression GT expression {$$ = boolean_operator_checker($1, $3, yylineno);}
    | expression LT expression  {$$ = boolean_operator_checker($1, $3, yylineno);}
    | expression GTE expression {$$ = boolean_operator_checker($1, $3, yylineno);}
    | expression LTE expression {$$ = boolean_operator_checker($1, $3, yylineno);}
    | expression ADD expression {$$ = arithmetic_operator_checker($1, $3, yylineno);}
    | ADD expression {$$ = arithmetic_operator_checker($1, NULL, yylineno);}
    | expression SUB expression {$$ = arithmetic_operator_checker($1, $3, yylineno);}
    | SUB expression {$$ = arithmetic_operator_checker($1, NULL, yylineno);}
    | expression MUL expression {$$ = arithmetic_operator_checker($1, $3, yylineno);}
    | expression DIV expression {$$ = arithmetic_operator_checker($1, $3, yylineno);}
    | expression MOD expression {$$ = arithmetic_operator_checker($1, $3, yylineno);}
    | expression POW expression {$$ = arithmetic_operator_checker($1, $3, yylineno);}
    | expression SHL expression {$$ = bitwise_operator_checker($1, $3, yylineno);}
    | expression SHR expression {$$ = bitwise_operator_checker($1, $3, yylineno);}
    | expression BITWISE_OR expression {$$ = bitwise_operator_checker($1, $3, yylineno);}
    | expression BITWISE_AND expression {$$ = bitwise_operator_checker($1, $3, yylineno);}
    | LOGICAL_NOT expression {$$ = boolean_operator_checker($1, NULL, yylineno);}
    | IDENTIFIER {int i = lookupSymbol($1, false, yylineno); checkVariableType(i, yylineno); $$ = set_type(getSymbolById(i)->dType);}
    | CONSTANT {int i = lookupSymbol($1, false, yylineno); checkVariableType(i, yylineno); $$ = set_type(getSymbolById(i)->dType);} 
    | INT_VALUE {$$ = set_type("int");checkParameterType("int", yylineno);checkIntAssigning(workingSymbolID, $1, yylineno);}
    | FLOAT_VALUE {$$ = set_type("float");checkParameterType("float", yylineno); checkFloatAssigning(workingSymbolID, $1, yylineno);}
    | STRING_VALUE {$$ = set_type("string");checkParameterType("string", yylineno); checkStringAssigning(workingSymbolID, $1, yylineno);}
    | CHAR_VALUE {$$ = set_type("char");checkParameterType("char", yylineno); checkCharAssigning(workingSymbolID, $1, yylineno);}
    | BOOL_VALUE {$$ = set_type("bool");checkParameterType("bool", yylineno); checkBoolAssigning(workingSymbolID, $1, yylineno);}
    | LPAREN expression RPAREN {$$ = $2;}
    | fun_call {
        char* funType = getSymbolById(calledFuncIndex)->dType;
        checkFunctionReturnType(workingSymbolID, funType, yylineno);
        markInitialized(workingSymbolID);
        $$ = $1;
    }
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
        DisplayTheSymbolTable();
        displayUnusedVariables();
    } else {
        fprintf(stderr, "\nParsing failed with %d errors.\n", parse_result);
    }
    
    fclose(inputFile);
    return parse_result;
}