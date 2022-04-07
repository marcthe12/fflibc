#include "memory.h"

size_t wmemlchr(wchar_t const *buffer, wchar_t value, size_t size)
{
	for (size_t i = 0; i < size; i++)
		if (buffer[i] == value)
			return i;
	return size;
}
