#include "memory.h"

void *rawmemccpy(void *restrict dest, void const *restrict src, int value)
{
	unsigned char *restrict destination = dest;
	unsigned char const *restrict source = src;
	size_t i = 0;
	for (i = 0;; i++) {
		destination[i] = source[i];
		if (destination[i] == (unsigned char)value)
			return &destination[i + 1];
	}
}
