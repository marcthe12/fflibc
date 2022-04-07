#include "memory.h"

char *strrchr(char const *buffer, int value)
{
	return memrchr(buffer, value, strlen(buffer) + 1);
}
