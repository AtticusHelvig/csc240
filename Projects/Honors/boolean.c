#include <stdio.h>

int yyparse();

int main()
{
   printf("Boolean Algebra Interpreter\n\n");

   yyparse();

   return 0;
}
