#ifndef VARIABLE_H
#define VARIABLE_H

struct Variable
{
    char *id;
    int value;
};

int var_isIdEqual(const char *id);

#endif
