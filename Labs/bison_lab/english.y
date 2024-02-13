%{
#include <stdio.h>
#include <stdlib.h>
int yylex (void);
void yyerror (char const *);
extern char *yytext;
%}

%token table		1
%token horse		2
%token computer		3
%token big		4
%token fast		5
%token good		6
%token high		7
%token makes		8
%token is		9
%token red		10
%token question_mark	11

%%

statement_list	: statement
				| statement statement_list
				;

statement	: sentence
				{printf("Found a sentence!\n");}
			| question
				{printf("Found a question!\n");}
		    ;

sentence	: subject verb object
		    ;

question	: is subject adjective question_mark
			;

subject		: adjective_list noun
		    ;

adjective_list	: adjective 
		        | adjective_list adjective
				;

object		: subject
		    ;

noun		: table | horse | computer 
		    ;

verb		: makes | is
		    ;

adjective	: big | fast | good | high | red
		    ;

%%
