#include "memory.h"

int strncmp(char const *string1, char const *string2, size_t size)
{
	return memccmp(string1, string2, '\0', size);
}
