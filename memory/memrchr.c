#include "memory.h"

void *memrchr(void const *buf, int value, size_t size)
{
	unsigned char const *buffer = buf;
	for (size_t i = size; i-- > 0;)
		if (buffer[i] == (unsigned char)value)
			return (void *)&buffer[i];
	return NULL;
}
