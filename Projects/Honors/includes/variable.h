#ifndef VARIABLE_H
#define VARIABLE_H

typedef struct Variable var;
struct Variable {
  char *id;
  int *value;
};

int var_isIdEqual(const struct Variable *variable, const char *id);

#endif
