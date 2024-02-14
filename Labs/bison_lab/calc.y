%{
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int yylex (void);
void yyerror (char const *);
extern char *yytext;
%}

%union {
        double val;
}

%token NUM	1
%token '-'
%token '+'
%token '*'
%token '/'
%token '('
%token ')'
%token '^'
%token square_root      2
%token pi       3
%token squared  '#'
%token 'I'
%token '%'
%token '{'
%token '}'

%type <val> exp
%type <val> exp_list
%type <val> sum


%%
input:  /* empty string */
        | input line
;

line:     '\n'
        | exp '\n'  { printf (">>> %.5g\n", $1); }
;

exp:      NUM                { $$ = atof(yytext);    }
        | exp '+' exp        { $$ = $1 + $3;    }
        | exp '-' exp        { $$ = $1 - $3;    }
        | exp '*' exp        { $$ = $1 * $3;    }
        | exp '/' exp        { $$ = $1 / $3;    }
        | '-' exp 	     { $$ = -$2;        }
        | '(' exp ')'        { $$ = $2;         }
        | exp '^' exp        { $$ = pow($1, $3);}
        | square_root '(' exp ')'   { $$ = sqrt($3);   }
        | pi                 { $$ = 3.14159265358979323846264;  }
        | exp squared        { $$ = pow($1, 2); }
        | 'I' exp            { $$ = (int) $2;   }   
        | exp '%' exp        { $$ = (int) $1 % (int) $3;    } 
        | sum                { $$ = $1; }  
;

exp_list:         exp           { $$ = $1;      }
                | exp exp_list  { $$ = $1 + $2; }
;

sum:      '{' exp_list '}'        { $$ = $2; }
;
%%
