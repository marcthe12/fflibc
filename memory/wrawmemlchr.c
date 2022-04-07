#include "memory.h"

size_t wrawmemlchr(wchar_t const *buffer, wchar_t value)
{
	for (size_t i = 0;; i++)
		if (buffer[i] == value)
			return i;
}
