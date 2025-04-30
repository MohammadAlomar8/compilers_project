%{
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "symbol_table.cpp"
#include "quad.cpp"

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

%token ASSIGN_ADD ASSIGN_SUB ASSIGN_MUL ASSIGN_DIV ASSIGN_MOD
%token ASSIGN_POW ASSIGN_AND ASSIGN_OR ASSIGN_NOT ASSIGN_SHR ASSIGN_SHL



/* Type Declarations */
%type <string_value> type IDENTIFIER
%type <int_value> INT_VALUE
%type <float_value> FLOAT_VALUE
%type <string_value> STRING_VALUE CHAR_VALUE
%type <bool_value> BOOL_VALUE
%type <nodeptr> expression
%type <nodeptr> DIV MUL MOD LOGICAL_AND LOGICAL_NOT LOGICAL_OR SHL SHR POW fun_call_with_args fun_call_no_args fun_call return_statment declaration_statement CONTINUE BREAK RETURN INC DEC SUB LPAREN RPAREN ADD inc_dec_statement assignment_statement
%type <nodeptr> EQ BITWISE_AND BITWISE_OR while_statement



%nonassoc  LOWER_THAN_IF
%nonassoc  ELSE

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
    type IDENTIFIER {workingSymbolID = insertSymbol($2,"variable",$1,yylineno,0 ); markInitialized(workingSymbolID);} EQ expression SEMICOLON {workingSymbolID = -1;
        printf("\nstart declaration_statement in parser\n");
        char* temp1 = strdup($2);
        char* temp2 = $5->name ? strdup($5->name) : NULL;
        processExpression(quad_file, temp2, "--", temp1, "ASSIGN");
        printf("\nfinish declaration_statement in parser\n");
    }
    
    | type IDENTIFIER {workingSymbolID = insertSymbol($2,"variable",$1,yylineno,0 );} SEMICOLON {workingSymbolID = -1; $$ = NULL;}            
    
    | type CONSTANT {workingSymbolID = insertSymbol($2,"constant",$1,yylineno,0 );} EQ expression SEMICOLON {workingSymbolID = -1;
        char* temp1 = strdup($2);
        char* temp2 = strdup($4->name);
        printf("$2->name: %s\n", temp1);
        printf("$4->name: %s\n", temp2);
        processExpression(quad_file, temp2, "--", temp1, "ASSIGN");
    }   
    
    ;




assignment_statement:
    IDENTIFIER EQ { 
        workingSymbolID = lookupSymbol($1, 1, yylineno); 
    } expression SEMICOLON { 
        char* temp1 = strdup($1); 
        char* temp2 = strdup($4->name); 
        processExpression(quad_file, temp2, "--", temp1, "ASSIGN");
        if (temp1) free(temp1);
        if (temp2) free(temp2); 
    }

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
    PRINT LPAREN expression RPAREN SEMICOLON {processExpression(quad_file,$3->name ,"--","--","PRINT");}
    | PRINT LPAREN RPAREN SEMICOLON {processExpression(quad_file,"--" ,"--","--","PRINT");}
    ;

if_tail:
    ELSE block
    | ELSE if_statement
    | 
    ;

if_statement:
    IF LPAREN expression RPAREN {writeIfConditionQuadruples(quad_file, $3->type, first_operand, second_operand, "JUMPIF"); } block {writeIfEndLabel(quad_file, "JUMPIF");} if_tail  
    // %prec LOWER_THAN_IF                     
   // | IF LPAREN expression RPAREN block ELSE block          {printf("parsing if_statement \n")}
    ;
for_block:
     program  
    ;
for_statement:
    FOR LPAREN {enterScope();} statement statement statement RPAREN {inLoop = true;} LBRACE for_block RBRACE {inLoop = false; exitScope(yylineno);} 
    ;

// -------------------------- function things ----------------------------
function_statment: 
    type FUNCTION_KEY IDENTIFIER LPAREN args_statment RPAREN {funIndex = insertSymbol($3,"function", $1, yylineno, 0); }     block
                                       
    | type FUNCTION_KEY IDENTIFIER LPAREN RPAREN {funIndex = insertSymbol($3,"function", $1, yylineno, 0);}          block                                   
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
        isParameter = 0;
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
    expression {funcArgCount++; isParameter = 1; } ',' fun_arg_call {printf("parsing fun arg call  \n")}
    | expression {funcArgCount++; printf("\ncalledFuncIdex: %d\n", calledFuncIndex);}               
    ;

return_statment:
    RETURN SEMICOLON
    | RETURN {workingSymbolID = funIndex;} expression SEMICOLON {returnInFunction = true;}
// -------------------------- function ----------------------------


// --------------------------- while things -------------------------------
while_statement:
    WHILE {inLoop = true; sprintf(loop_label, "L%d", loop_counter++); 
    writeQuadruple(quad_file, "LABEL","--","--", loop_label)} 
    LPAREN expression RPAREN block  {inLoop = false; writeQuadruple(quad_file, "JUMP","--","--", loop_label)}    {printf("parsing while statment \n")}
    ;

do_while_statement:
    DO {inLoop = true; sprintf(loop_label, "L%d", loop_counter++);writeQuadruple(quad_file, "LABEL","--","--", loop_label) } block WHILE LPAREN expression RPAREN SEMICOLON {inLoop = false;  writeQuadruple(quad_file, "JUMP","--","--", loop_label)} 
    ;
// ----------------------------while ------------------------------------

inc_dec_statement:
    IDENTIFIER INC SEMICOLON  {int id = lookupSymbol($1, false, yylineno);nodeType * temp = create_node(getSymbolById(id)->dType, getSymbolById(id)->name); $$ = inc_dec_checker(temp, yylineno);}
    | DEC IDENTIFIER SEMICOLON  {int id = lookupSymbol($2, false, yylineno);nodeType * temp = create_node(getSymbolById(id)->dType,getSymbolById(id)->name); $$ = inc_dec_checker(temp, yylineno);}
    | INC IDENTIFIER  SEMICOLON  {int id = lookupSymbol($2, false, yylineno);nodeType * temp = create_node(getSymbolById(id)->dType, getSymbolById(id)->name); $$ = inc_dec_checker(temp, yylineno);}
    | IDENTIFIER DEC SEMICOLON  {int id = lookupSymbol($1, false, yylineno);nodeType * temp = create_node(getSymbolById(id)->dType,getSymbolById(id)->name); $$ = inc_dec_checker(temp, yylineno);}
    | IDENTIFIER INC   {int id = lookupSymbol($1, false, yylineno);nodeType * temp = create_node(getSymbolById(id)->dType,getSymbolById(id)->name); $$ = inc_dec_checker(temp, yylineno);}
    | IDENTIFIER DEC   {int id = lookupSymbol($1, false, yylineno);nodeType * temp = create_node(getSymbolById(id)->dType,getSymbolById(id)->name); $$ = inc_dec_checker(temp, yylineno);}
    ;

block:
    LBRACE {enterScope();} program RBRACE   { exitScope(yylineno); }
    ;



expression:
    expression LOGICAL_OR expression {$$ = boolean_operator_checker($1, $3, yylineno);}
    | expression LOGICAL_AND expression {$$ = boolean_operator_checker($1, $3, yylineno);}
    | expression EQUAL expression {$$ = boolean_operator_checker($1, $3, yylineno);}
    | expression NOT_EQUAL expression {$$ = boolean_operator_checker($1, $3, yylineno);}
    | expression GT expression {
        $$ = boolean_operator_checker($1, $3, yylineno);
        char* temp1 = strdup($1->name);
        char* temp2 = strdup($3->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "GT");
        $$->name = temp;
        $$->type = "GT";
        first_operand = temp1;
        second_operand = temp2;
    }
    | expression GTE expression {$$ = boolean_operator_checker($1, $3, yylineno);}
    | expression LTE expression {$$ = boolean_operator_checker($1, $3, yylineno);}
    | expression LT expression  {$$ = boolean_operator_checker($1, $3, yylineno);}
    | expression ADD expression {
        $$ = arithmetic_operator_checker($1, $3, yylineno);
        char* temp1 = strdup($1->name);
        char* temp2 = strdup($3->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file,temp1, temp2, temp, "ADD");
        $$->name = temp;
    }
    | ADD expression {$$ = arithmetic_operator_checker($1, NULL, yylineno);}
    | DIV expression {$$ = arithmetic_operator_checker($1, NULL, yylineno);}
    | expression SUB expression {
        $$ = arithmetic_operator_checker($1, $3, yylineno);
        char* temp1 = strdup($1->name);
        char* temp2 = strdup($3->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "SUB");
        $$->name = temp;
    }
    | SUB expression {$$ = arithmetic_operator_checker($1, NULL, yylineno);}
    | expression MUL expression {
        $$ = arithmetic_operator_checker($1, $3, yylineno);
        char* temp1 = strdup($1->name);
        char* temp2 = strdup($3->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "MUL");
        $$->name = temp;
    }
    | expression DIV expression {
        $$ = arithmetic_operator_checker($1, $3, yylineno);
        char* temp1 = strdup($1->name);
        char* temp2 = strdup($3->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "DIV");
        $$->name = temp;
        $$->type = $1->type;
    }
    | expression MOD expression {
        $$ = arithmetic_operator_checker($1, $3, yylineno);
        char* temp1 = strdup($1->name);
        char* temp2 = strdup($3->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "MOD");
        $$->name = temp;
    }
    | expression POW expression {
        $$ = arithmetic_operator_checker($1, $3, yylineno);
        char* temp1 = strdup($1->name);
        char* temp2 = strdup($3->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "POW");
        $$->name = temp;
    }
    | expression SHL expression {
        $$ = bitwise_operator_checker($1, $3, yylineno);
        char* temp1 = strdup($1->name);
        char* temp2 = strdup($3->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "SHL");
        $$->name = temp;
    }
    | expression SHR expression {
        $$ = bitwise_operator_checker($1, $3, yylineno);
        char* temp1 = strdup($1->name);
        char* temp2 = strdup($3->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "SHR");
        $$->name = temp;
    }
    | expression BITWISE_OR expression {$$ = bitwise_operator_checker($1, $3, yylineno);}
    | expression BITWISE_AND expression {$$ = bitwise_operator_checker($1, $3, yylineno);}
    | LOGICAL_NOT expression 
    {
        $$ = boolean_operator_checker($2, NULL, yylineno);
            char* temp = strdup(createTemp());
            char* temp1 = $2->name ? strdup($2->name) : NULL;
            processExpression(quad_file, temp1, "--", temp, "NOT");
            $$->name = temp;
    }
    | IDENTIFIER {int i = lookupSymbol($1, false, yylineno); checkVariableType(i, yylineno); $$ = create_node(getSymbolById(i)->dType,$1);}
    | CONSTANT {int i = lookupSymbol($1, false, yylineno); checkVariableType(i, yylineno); $$ = create_node(getSymbolById(i)->dType,$1);} 
    | INT_VALUE { 
        char stri[32];
        sprintf(stri, "%d", $1);
        $$ = create_node("int", strdup(stri));
        checkParameterType("int", yylineno);
        checkIntAssigning(workingSymbolID, $1, yylineno); 
    }
    | FLOAT_VALUE { char buffer[50]; sprintf(buffer, "%f", $1); $$ = create_node("float", buffer) ;printf("buffer:%s \n", buffer); checkParameterType("float", yylineno); checkFloatAssigning(workingSymbolID, $1, yylineno); }
    | STRING_VALUE { $$ = create_node("string", $1); checkParameterType("string", yylineno); checkStringAssigning(workingSymbolID, $1, yylineno); }
    | CHAR_VALUE { char buffer[10]; sprintf(buffer, "%c", $1); $$ = create_node("char", $1); checkParameterType("char", yylineno); checkCharAssigning(workingSymbolID, $1, yylineno); }
    | BOOL_VALUE { char buffer[6]; sprintf(buffer, "%s", $1 ? "true" : "false"); $$ = create_node("bool", buffer); checkParameterType("bool", yylineno); checkBoolAssigning(workingSymbolID, $1, yylineno); }
    | LPAREN expression RPAREN {$$ = $2;}
    | fun_call {
        printf("\nstart fun_call in parser\n");

    char* funName = getSymbolById(calledFuncIndex)->name;
    char* funType = getSymbolById(calledFuncIndex)->dType;

    // Create a temp to store return value, if any
    char* temp = NULL;
    if (strcmp(funType, "void") != 0) {
        printf("\nany thing 1 \n");
        temp = strdup(createTemp());
        processExpression(quad_file, funName, "--", temp, "CALL");
        printf("\nany thing 2 \n");
    } else {
        printf("\nany thing \n");
        processExpression(quad_file, funName, "--", "--", "CALL");
    }

    printf("\nany thing 3 \n");
    checkFunctionReturnType(calledFuncIndex, funType, yylineno);
    printf("\nany thing 4 \n");
   // markInitialized(workingSymbolID); // TODO: 
    printf("\nany thing 5 \n");

    // Create and return a node to hold the return value (if any)
    $$ = create_node("function_call", funName);
    $$->name = temp;

    printf("\nfinish fun_call in parser\n");
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
    quad_file = fopen("quadruples.txt", "w");

    extern FILE* yyin;
    yyin = inputFile;

    printf("Starting parsing of %s...\n", argv[1]);
    int parse_result = yyparse();
    //quad_file = create_file("quadruples.txt");
    // set_file_path("quadruples.txt", quad_file);
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