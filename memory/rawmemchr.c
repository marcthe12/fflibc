#include "memory.h"

void *rawmemchr(void const *buf, int value)
{
	unsigned char const *buffer = buf;
	for (size_t i = 0;; i++)
		if (buffer[i] == (unsigned char)value)
			return (void *)&buffer[i];
}
