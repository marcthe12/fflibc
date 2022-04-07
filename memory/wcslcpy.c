#include "memory.h"

size_t wcslcpy(wchar_t *destination, wchar_t const *source, size_t count)
{
	wchar_t *result = wmemccpy(destination, source, L'\0', count);
	result = (result == NULL) ? &destination[count] : (result - 1);
	*result = L'\0';
	return wcslen(source);
}
