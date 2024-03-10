boolean: boolean.c lex.yy.c boolean.tab.c
	gcc boolean.c lex.yy.c boolean.tab.c ./includes/expr_tree.c -o boolean

lex.yy.c: boolean.l
	flex boolean.l

boolean.tab.c: boolean.y
	bison --warnings=none boolean.y 
