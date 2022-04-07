#include "memory.h"

void *memcpy(void *restrict destination, void const *restrict source,
	     size_t count)
{
	mempcpy(destination, source, count);
	return destination;
}
