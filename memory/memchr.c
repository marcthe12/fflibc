#include "memory.h"

void *memchr(void const *buf, int value, size_t size)
{
	unsigned char const *buffer = buf;
	for (size_t i = 0; i < size; i++)
		if (buffer[i] == (unsigned char)value)
			return (void *)&buffer[i];
	return NULL;
}
