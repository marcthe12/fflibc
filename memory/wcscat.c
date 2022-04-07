#include "memory.h"

wchar_t *wcscat(wchar_t *restrict destination, wchar_t const *restrict source)
{
	wcscpy(destination + wcslen(destination), source);
	return destination;
}
