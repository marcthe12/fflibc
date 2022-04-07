#include "memory.h"

wchar_t *wcsrchr(wchar_t const *buffer, wchar_t value)
{
	return wmemrchr(buffer, value, wcslen(buffer) + 1);
}
