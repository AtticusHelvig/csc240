%option noyywrap

%{
#include "tokens.h"
%}


%option yylineno

%%
	/* Keywords */
break 		{ return BREAK;		}
continue	{ return CONTINUE;	}
const		{ return CONST;		}
do			{ return DO;		}
else		{ return ELSE;		}
float		{ return FLOAT;		}
for			{ return FOR;		}
if			{ return IF;		}
int			{ return INT;		}
readint		{ return READINT;	}
return		{ return RETURN;	}
while		{ return WHILE;		}
writeint	{ return WRITEINT;	}
writestring	{ return WRITESTRING;}

	/* Constants: Integer, real and string */
[-+]?[0-9]+	{ return INT_CONST;	}
[-+]?[0-9]*\.[0-9]+	{ return REAL_CONST;	}
\"(\\\"|[^\"])*\"	{ return STRING_CONST;	}

	/* Punctuation */
"("		{ return LPAREN;	}
")"		{ return RPAREN;	}
"{"		{ return LBRACE;	}
"}"		{ return RBRACE;	}
":"		{ return COLON;	}
";"		{ return SEMICOLON;	}
"<="	{ return LE;	}
">="	{ return GE;	}
"=="	{ return EQUALS_EQUALS;	}
"!="	{ return NE;	}
"="		{ return EQUALS;	}
","		{ return COMMA;	}
"++"	{ return PLUS_PLUS;	}
"--"	{ return MINUS_MINUS;	}
"+"		{ return PLUS;	}
"-"		{ return MINUS;	}
"*"		{ return TIMES;	}
"/"		{ return DIVIDE;	}
"%"		{ return MOD;	}
"<"		{ return LESS;	}
">"		{ return GREATER;	}
"?"		{ return QUESTION;	}
"&&"	{ return AND_AND;	}
"||"	{ return OR_OR;	}
"&"		{ return AND;	}
"!"		{ return BANG;	}

	/* Identifiers */
[a-zA-Z_][a-zA-Z0-9_]*	{ return IDENTIFIER;	}


	/* Ignored stuff: macros, comments, whitespace (tab, newline, carriage return, space) */
\/\/.*	{}
\/\*[.\n]\*\/	{}
^#.*	{}
[ \t\r\n] {}

	/* Anything not matches in a lexical error. */
.		{ printf("%d: Lexical Error: '%c'\n", yylineno, yytext[0]); exit(0); }

%%

void yyerror () {
	printf ("%d: Syntax error\n", yylineno);
	exit(0);
}
