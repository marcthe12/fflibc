#include "memory.h"

void *memset(void *buf, int value, size_t size)
{
	unsigned char *buffer = buf;
	for (size_t i = 0; i < size; i++) {
		buffer[i] = (unsigned char)value;
	}
	return buffer;
}
