#include "memory.h"

int wmemccmp(wchar_t const *buffer1, wchar_t const *buffer2, wchar_t value,
	     size_t size)
{
	wchar_t const *buffer[] = {buffer1, buffer2};
	for (size_t i = 0; i < size; i++) {
		if (buffer[0][i] != buffer[1][i])
			return buffer[0][i] - buffer[1][i];
		if (buffer[0][i] == value || buffer[1][i] == value)
			break;
	}
	return 0;
}
