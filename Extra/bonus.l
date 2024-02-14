%option noyywrap

%%

finally             { printf("Found keyword finally\n"); }
^[0-9]+             { printf("Found a line starting with one or more digits: %s\n", yytext); }
[+-]?[0-9a-fA-F]+   { printf("Found a hex number: %s\n", yytext); }
&&                  { printf("Found an &&\n"); }

    /* Ignore Whitespace */
[ \f\n\r\t\v]

.	                { printf("*%s*\n", yytext); }

%%

int main(int argc, char *argv[]) {
  yylex();
}

