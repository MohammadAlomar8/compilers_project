%{
    #include "parser.tab.h"
    #include <stdbool.h>
    #include <string.h>
%}
%option yylineno
int yylineno = 1;
%%
\/\/[\s\t]*.*[\s\t]* // for comments

"int"      {return INT;}
"float"    {return FLOAT;}
"string"   {return STRING;}
"char"     {return CHAR;}
"bool"     {return BOOL;}

"if"       {return IF;}
"else"     {return ELSE;}

"for"      {return FOR;}
"while"    {return WHILE;}
"do"       {return DO;}

"true"     {yylval.bool_value = 1; return BOOL_VALUE;}
"false"    {yylval.bool_value = 0;return BOOL_VALUE;} 

"TRUE"     {yylval.bool_value = 1; return BOOL_VALUE;}
"FALSE"    {yylval.bool_value = 0;return BOOL_VALUE;}     

"and"      {return LOGICAL_AND;}
"or"       {return LOGICAL_OR;}
"not"        {return LOGICAL_NOT;}

"etba3"    {return PRINT;}
"void"     {return VOID;}
"erg3"   {return RETURN;}
"dalla"     {return FUNCTION_KEY;}
"return"     {return RETURN;}
"switch"   {return SWITCH;}
"break"    {return BREAK;}  
"case"     {return CASE;}
"default"  {return DEFAULT;}

"=="       {return EQUAL;}
"!="       {return NOT_EQUAL;}

">"        {return GT;}
"<"        {return LT;}

"="        {return EQ;}         
";"        {return SEMICOLON;}

"%"        {return MOD;}
"+"        {return ADD;}
"-"        {return SUB;}
"*"        {return MUL;}
"/"        {return DIV;}
"^"        {return POW;}

"|"        {return BITWISE_OR;}
"&"        {return BITWISE_AND;}
"<<"       {return SHL;}
">>"       {return SHR;}
"++"       { return INC; }
"--"       { return DEC; }
"("        {return LPAREN;}
")"        {return RPAREN;}
"{"        {return LBRACE;}
"}"        {return RBRACE;}

[:,]               {return *yytext;}
[A-Z]+                 {yylval.string_value = strdup(yytext); return CONSTANT;}
[a-zA-Z_][a-zA-Z0-9_]* {yylval.string_value = strdup(yytext); return IDENTIFIER;}

\'.\'        {yylval.string_value = strdup(yytext); return CHAR_VALUE;}
\".*\"        {yylval.string_value = strdup(yytext); return STRING_VALUE;}

[0-9]+         {yylval.int_value = atoi(yytext); return INT_VALUE;}
[0-9]+\.[0-9]+ {yylval.float_value= atof(yytext);return FLOAT_VALUE;}

[ \t]+                         
\n              { yylineno++; }        
.              {return *yytext;}
%%

