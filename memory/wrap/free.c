#include "memory.h"
#include <stdlib.h>

void _free_wrap(void *buffer) { free(buffer); }
