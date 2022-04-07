#include "memory.h"

int wrawmemccmp(wchar_t const *buffer1, wchar_t const *buffer2, wchar_t value)
{
	wchar_t const *buffer[] = {buffer1, buffer2};
	for (size_t i = 0;; i++) {
		if (buffer[0][i] != buffer[1][i])
			return (int)buffer[0][i] - (int)buffer[1][i];
		if (buffer[0][i] == value || buffer[1][i] == value)
			return 0;
	}
}
