#include "memory.h"

int wcsncmp(wchar_t const *string1, wchar_t const *string2, size_t size)
{
	return wmemccmp(string1, string2, L'\0', size);
}
