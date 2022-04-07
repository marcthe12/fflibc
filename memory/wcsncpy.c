#include "memory.h"

wchar_t *wcsncpy(wchar_t *destination, wchar_t const *source, size_t count)
{
	wcspncpy(destination, source, count);
	return destination;
}
