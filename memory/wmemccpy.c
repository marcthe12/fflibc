#include "memory.h"

wchar_t *wmemccpy(wchar_t *restrict destination, wchar_t const *restrict source,
		  wchar_t value, size_t count)
{
	size_t i = 0;
	for (i = 0; i < count; i++) {
		destination[i] = source[i];
		if (destination[i] == value)
			break;
	}
	return &destination[i + 1];
}
