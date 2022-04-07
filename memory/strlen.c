#include "memory.h"

size_t strlen(char const *string) { return rawmemlchr(string, '\0'); }
