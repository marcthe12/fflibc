#include "memory.h"

wchar_t *wcspcpy(wchar_t *destination, wchar_t const *source)
{
	return wrawmemccpy(destination, source, L'\0') - 1;
}
