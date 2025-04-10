HOW TO RUN:
1) bison parser.y -d
2) flex lexer.l
3) gcc .\lex.yy.c .\parser.tab.c -o comp
4) .\comp.exe test.txt
