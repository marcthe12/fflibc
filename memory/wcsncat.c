#include "memory.h"

wchar_t *wcsncat(wchar_t *restrict destination, wchar_t const *restrict source,
		 size_t max_len)
{
	wmemcpy(destination + wcslen(destination), source,
		wcsnlen(destination, max_len));
	return destination;
}
