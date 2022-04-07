#include "memory.h"

double wtof(wchar_t const *string) { return _wcstod_wrap(string, NULL); }
