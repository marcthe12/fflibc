#include "memory.h"
#include <stdlib.h>

void *_realloc_wrap(void *buffer, size_t size) { return realloc(buffer, size); }
