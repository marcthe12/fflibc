#include "memory.h"

int rawmemccmp(void const *buffer1, void const *buffer2, unsigned char value)
{
	unsigned char const *buffer[] = {buffer1, buffer2};
	for (size_t i = 0;; i++) {
		if (buffer[0][i] != buffer[1][i])
			return (int)buffer[0][i] - (int)buffer[1][i];
		if (buffer[0][i] == (unsigned char)value ||
		    buffer[1][i] == (unsigned char)value)
			return 0;
	}
}
