#include "memory.h"

size_t wcsnlen(wchar_t const *string, size_t max_len)
{
	return wmemlchr(string, L'\0', max_len);
}
