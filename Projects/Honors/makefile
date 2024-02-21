boolean: boolean.c lex.yy.c boolean.tab.c
	gcc boolean.c lex.yy.c boolean.tab.c -o boolean

lex.yy.c: boolean.l
	flex boolean.l

boolean.tab.c: boolean.y
	yacc --warnings=none boolean.y -o boolean.tab.c
