#include <string.h>
#include "variable.h"

int var_isIdEqual(const struct Variable variable, const char *id)
{
    return strcmp(variable.id, id);
}