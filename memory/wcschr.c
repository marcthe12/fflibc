#include "memory.h"

wchar_t *wcschr(wchar_t const *buffer, wchar_t value)
{
	return wmemchr(buffer, value, wcslen(buffer) + 1);
}
