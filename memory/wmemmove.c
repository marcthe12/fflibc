#include "memory.h"

wchar_t *wmemmove(wchar_t *restrict destination, wchar_t const *restrict source,
		  size_t count)
{
	if (destination < source)
		wmemcpy(destination, source, count);
	else
		for (size_t i = count; i-- > 0;)
			destination[i] = source[i];
	return destination;
}
