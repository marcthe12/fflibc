#include "memory.h"

void *memccpy(void *restrict dest, void const *restrict src, int value,
	      size_t count)
{
	unsigned char *restrict destination = dest;
	unsigned char const *restrict source = src;
	for (size_t i = 0; i < count; i++) {
		destination[i] = source[i];
		if (destination[i] == (unsigned char)value)
			return &destination[i + 1];
	}
	return NULL;
}
