#include "memory.h"

void *mempcpy(void *restrict dest, void const *restrict src, size_t count)
{
	unsigned char *restrict destination = dest;
	unsigned char const *restrict source = src;
	size_t i = 0;
	for (i = 0; i < count; i++)
		destination[i] = source[i];
	return &destination[i];
}
