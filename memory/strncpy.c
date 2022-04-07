#include "memory.h"

char *strncpy(char *destination, char const *source, size_t count)
{
	stpncpy(destination, source, count);
	return destination;
}
