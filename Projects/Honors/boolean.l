%option noyywrap

%{
#include "tokens.h"
%}


%option yylineno

%%
	/* Keywords */
and     { return AND;       }
or      { return OR;        }
not     { return NOT;       }
xor     { return XOR;       }
nand    { return NAND;      }
nor     { return NOR;       }
xnor    { return XNOR;      }

	/* Constants */
true    { return TRUE;      }
false   { return FALSE;     }
[0-9]+  { return INT_LITERAL;   }

	/* Punctuation */
"("		{ return LPAREN;	}
")"		{ return RPAREN;	}
"{"		{ return LBRACE;	}
"}"		{ return RBRACE;	}
"["		{ return LBRACKET;	}
"]"		{ return RBRACKET;	}
":"		{ return COLON;	    }
";"		{ return SEMICOLON;	}
"="		{ return EQUALS;	}
","		{ return COMMA;	    }
"&"	    { return AND;	    }
"|"	    { return OR;	    }
"!"		{ return NOT;	    }
"^"     { return XOR;       }
"&!"    { return NAND;      }
"|!"    { return NOR;       }
"^!"    { return XNOR;      }

	/* Identifiers */
[a-zA-Z_][a-zA-Z0-9_]*	{ return IDENTIFIER;	}


	/* Ignored stuff: macros, comments, whitespace (tab, newline, carriage return, space) */
\/\/.*
\/\*[.\n]\*\/
^#.*
[ \t\r\n]

	/* Anything not matches in a lexical error. */
.		{ printf("%d: Lexical Error: '%c'\n", yylineno, yytext[0]); exit(0); }

%%

void yyerror () {
	printf ("%d: Syntax error\n", yylineno);
	exit(0);
}
