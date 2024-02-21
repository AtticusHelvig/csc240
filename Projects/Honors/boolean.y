%{
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int yylex (void);
void yyerror (char const *);
extern char *yytext;
%}

%union {
        int boolean;
}

%token AND          1001
%token COLON        1002
%token COMMA        1003
%token EQUALS       1004
%token FALSE        1005
%token IDENTIFIER   1006
%token INT_LITERAL  1007
%token LBRACE       1008
%token LBRACKET     1009
%token LPAREN       1010
%token NAND         1011
%token NOR          1012
%token NOT          1013
%token OR           1014
%token RBRACE       1015
%token RBRACKET     1016
%token RPAREN       1017
%token SEMICOLON    1018
%token TRUE         1019
%token XNOR         1020
%token XOR          1021

%type <boolean> expr
%type <boolean> bool

%%
program     : decl_list
            ;

decl_list   : decl
            | decl decl_list
            ;

decl        : stmt
            | component_decl
            ;

expr        : bool                  { $$ = $1; }
            // | id
            | id EQUALS expr        { $$ = $3; }
            | LPAREN expr RPAREN    { $$ = $2; }
            | expr AND expr         { $$ = $1 && $3; }
            | expr OR expr          { $$ = $1 || $3; }
            | expr XOR expr         { $$ = ($1 || $3) && !($1 && $3); }
            | expr NAND expr        { $$ = !($1 && $3); }
            | expr NOR expr         { $$ = !($1 || $3); }
            | expr XNOR expr        { $$ = !(($1 || $3) && !($1 && $3)); }
            | NOT expr              { $$ = !$2; }
            // | id LPAREN RPAREN
            // | id LPAREN arg_list RPAREN
            ;

bool        : TRUE                  { $$ = 1; }
            | FALSE                 { $$ = 0; }
            ;

id          : IDENTIFIER
            | IDENTIFIER LBRACKET INT_LITERAL RBRACKET
            ;

expr_list   : expr
            | expr expr_list
            ;

component_decl
            : id LPAREN opt_params RPAREN stmt
            ;

opt_params  : // Empty
            | param_decl_list
            | param_decl_list COLON param_decl_list
            ;

param_decl_list
            : param_decl
            | param_decl COMMA param_decl_list
            ;

param_decl  : id
            ;

stmt        : expr SEMICOLON
                { printf(">>> %s\n", $1 == 0 ? "false" : "true"); }
            ;

stmt_list   : stmt
            | stmt stmt_list
            ;

compound_stmt
            : LBRACE stmt_list RBRACE
            ;

arg_list    : expr
            | expr COMMA arg_list
            ;

%%
