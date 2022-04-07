#include "memory.h"

size_t wcsnlen_s(wchar_t const *string, size_t max_len)
{
	return (string == NULL) ? 0 : wcsnlen(string, max_len);
}
