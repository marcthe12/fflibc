#include "memory.h"

long atol(char const *string) { return _strtol_wrap(string, NULL, 10); }
