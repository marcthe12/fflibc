#include "memory.h"

int memcmp(void const *buffer1, void const *buffer2, size_t size)
{
	unsigned char const *buffer[] = {buffer1, buffer2};
	for (size_t i = 0; i < size; i++)
		if (buffer[0][i] != buffer[1][i])
			return (int)buffer[0][i] - (int)buffer[1][i];
	return 0;
}
