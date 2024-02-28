#ifndef VARIABLE_H
#define VARIABLE_H

typedef struct Variable Variable;
struct Variable {
    char *id;
    int *value;
};

int var_isIdEqual(const Variable *variable, const char *id);

#endif
