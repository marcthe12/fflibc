#include "memory.h"

wchar_t *wmempcpy(wchar_t *restrict destination, wchar_t const *restrict source,
		  size_t count)
{
	size_t i = 0;
	for (i = 0; i < count; i++)
		destination[i] = source[i];
	return &destination[i];
}
