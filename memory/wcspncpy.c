#include "memory.h"

wchar_t *wcspncpy(wchar_t *destination, wchar_t const *source, size_t count)
{
	wchar_t *result = wmemccpy(destination, source, L'\0', count);
	result = (result == NULL) ? &destination[count] : (result - 1);
	wmemset(result, L'\0', (size_t)(&destination[count] - result));
	return result;
}
