%option noyywrap

%%

[0-9]+([\.][0-9]+)?	{ return 1;   }
"-"	{ return '-'; }
"+"	{ return '+'; }
"*"	{ return '*'; }
"/"	{ return '/'; }
"("	{ return '('; }
")"	{ return ')'; }
"^"	{ return '^'; }
\n	{ return '\n'; }
sqrt  { return 2; }
pi    { return 3; }
"#"   { return '#';  }
"I"   { return 'I';  }
"%"   { return '%';  }
"{"   { return '{';  }
"}"   { return '}';  }
.	;

%%

void yyerror () {
   printf (" error\n");
   exit(0);
}
