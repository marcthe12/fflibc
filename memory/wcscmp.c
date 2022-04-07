#include "memory.h"

int wcscmp(wchar_t const *string1, wchar_t const *string2)
{
	return wrawmemccmp(string1, string2, L'\0');
}
