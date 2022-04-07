#include "memory.h"

long wtol(wchar_t const *string) { return _wcstol_wrap(string, NULL, 10); }
