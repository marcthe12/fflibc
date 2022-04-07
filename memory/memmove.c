#include "memory.h"

void *memmove(void *restrict dest, void const *restrict src, size_t count)
{
	unsigned char *restrict destination = dest;
	unsigned char const *restrict source = src;
	if (destination < source)
		memcpy(destination, source, count);
	else
		for (size_t i = count; i-- > 0;)
			destination[i] = source[i];
	return destination;
}
