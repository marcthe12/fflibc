#include "memory.h"

wchar_t *wmemcpy(wchar_t *restrict destination, wchar_t const *restrict source,
		 size_t count)
{
	mempcpy(destination, source, count);
	return destination;
}
