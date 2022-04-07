#include "memory.h"

double atof(char const *string) { return _strtod_wrap(string, NULL); }
