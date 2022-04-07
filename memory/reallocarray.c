#include "memory.h"
#include <errno.h>
#include <stdint.h>

void *reallocarray(void *buffer, size_t count, size_t size)
{
	if (count > 0 && SIZE_MAX / count < size) {
		errno = ENOMEM;
		return NULL;
	}
	return _realloc_wrap(buffer, count * size);
}
