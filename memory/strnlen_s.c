#include "memory.h"

size_t strnlen_s(char const *string, size_t max_len)
{
	return (string == NULL) ? 0 : strnlen(string, max_len);
}
