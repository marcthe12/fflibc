#include "memory.h"

wchar_t *wmemrchr(wchar_t const *buffer, wchar_t value, size_t size)
{
	for (size_t i = size; i-- > 0;)
		if (buffer[i] == value)
			return (wchar_t *)&buffer[i];
	return NULL;
}
