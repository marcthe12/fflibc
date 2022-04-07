#include "memory.h"

int atoi(char const *string) { return (int)_strtol_wrap(string, NULL, 10); }
