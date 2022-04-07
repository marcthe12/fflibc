#include "memory.h"

size_t strnlen(char const *string, size_t max_len)
{
	return memlchr(string, '\0', max_len);
}
