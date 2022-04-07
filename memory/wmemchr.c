#include "memory.h"

wchar_t *wmemchr(wchar_t const *buffer, wchar_t value, size_t size)
{
	for (size_t i = 0; i < size; i++)
		if (buffer[i] == value)
			return (wchar_t *)&buffer[i];
	return NULL;
}
