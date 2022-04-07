#include "memory.h"

size_t wcslen(wchar_t const *string) { return wrawmemlchr(string, L'\0'); }
