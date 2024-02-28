#include "variable.h"

#include <string.h>

int var_isIdEqual(const Variable *variable, const char *id) {
    return strcmp(variable->id, id);
}