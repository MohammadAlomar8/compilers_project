# This is a compiler to a language mixed from cpp and python using lex and yacc

## How to run:

1. Bison parser.y -d
2. Flex lexer.l
3. gcc .\lex.yy.c .\parser.tab.c -o comp
4. .\comp.exe test.txt

## **Key Words:**

"int" INT


"float" FLOAT


"string" STRING


"char" CHAR


"bool" BOOL


"if" IF


"else" ELSE


"for" FOR


"while" WHILE


"do" DO


"continue" CONTINUE


"true BOOL_VALUE


"false" BOOL_VALUE


"TRUE" return BOOL_VALUE


"FALSE" return BOOL_VALUE


"and" LOGICAL_AND


"or" LOGICAL_OR


"not" LOGICAL_NOT


"etba3" PRINT


"void" VOID


"dalla" FUNCTION_KEY


"return" RETURN


"switch" SWITCH


"break" BREAK


"case" CASE

"default" DEFAULT


"==" EQUAL


"!=" NOT_EQUAL


">" GT


"<" LT


"<=" LTE


">=" GTE


"=" EQ


";" SEMICOLON


"%" MOD


"+" ADD


"-" SUB


"*" MUL


"/" DIV


"^" POW


"|" BITWISE_OR


"&" BITWISE_AND


"<<" SHL


">>" SHR


"++" { return INC; }


"--" { return DEC; }


"(" LPAREN


")" RPAREN


"{" LBRACE


"}" RBRACE


"+=" { return ASSIGN_ADD; }


"-=" { return ASSIGN_SUB; }


"*=" { return ASSIGN_MUL; }


"/=" { return ASSIGN_DIV; }


"%=" { return ASSIGN_MOD; }


"**=" { return ASSIGN_POW; }


"&=" { return ASSIGN_AND; }


"|=" { return ASSIGN_OR; }


"~=" { return ASSIGN_NOT; }


">>=" { return ASSIGN_SHR; }


"<<=" { return ASSIGN_SHL; }


## QUAD, DESCRIPTiON

JUMP -- -- L, Unconditional jump to label L


ADD x1, x2, res, Add and store in res


JUMP FALSE CONDITION, temp2, --EXITLOOP1, Jump to exitloop if condition is false


PRINT “value”, Print


ASSIGN, temp3, --, s, S = temp3
