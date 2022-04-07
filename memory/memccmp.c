#include "memory.h"

int memccmp(void const *buffer1, void const *buffer2, int value, size_t size)
{
	unsigned char const *buffer[] = {buffer1, buffer2};
	for (size_t i = 0; i < size; i++) {
		if (buffer[0][i] != buffer[1][i])
			return buffer[0][i] - buffer[1][i];
		if (buffer[0][i] == (unsigned char)value ||
		    buffer[1][i] == (unsigned char)value)
			break;
	}
	return 0;
}
