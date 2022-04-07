#include "memory.h"

int wtoi(wchar_t const *string) { return (int)_wcstol_wrap(string, NULL, 10); }
