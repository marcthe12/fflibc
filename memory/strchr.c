#include "memory.h"

char *strchr(char const *buffer, int value)
{
	return memchr(buffer, value, strlen(buffer) + 1);
}
