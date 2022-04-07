#include "memory.h"

wchar_t *wcscpy(wchar_t *destination, wchar_t const *source)
{
	wcspcpy(destination, source);
	return destination;
}
