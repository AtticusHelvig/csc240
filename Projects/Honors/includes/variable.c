#include "variable.h"

#include <string.h>

int var_isIdEqual(const var *variable, const char *id) {
  return strcmp(variable->id, id);
}