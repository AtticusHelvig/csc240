calc: calc.c lex.yy.c calc.tab.c
	gcc calc.c lex.yy.c calc.tab.c -lm -o calc

lex.yy.c: calc.l
	flex calc.l

calc.tab.c:
	bison calc.y -o calc.tab.c