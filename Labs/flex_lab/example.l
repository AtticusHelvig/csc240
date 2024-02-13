%option noyywrap

%%
\/\/.*   { printf("Found a comment: %s\n", yytext); }
\"(\\\"|[^\".])*\"   { printf("Found a string literal: %s\n", yytext); }

while   { printf("Found a while: %s\n", yytext); }
for   { printf("Found a for: %s\n", yytext); }
if   { printf("Found an if: %s\n", yytext); }
([a-zA-Z]|_)+([a-zA-Z]|[0-9]|_)*   { printf("Found a legal C identifier: %s\n", yytext); }

[01][01][01][01]*   { printf("Found a binary number: %s\n", yytext); }

[-+]?[0-9]*\.?[0-9]+   { printf("Found a number: %s\n", yytext); }

^#.*    { printf("Found a comment: %s\n", yytext); }

[ \t\n\r\f] 

.	{ printf("*%s*\n", yytext); }

%%

int main(int argc, char *argv[]) {
  yylex();
}

