#include "memory.h"

char *strncat(char *restrict destination, char const *restrict source,
	      size_t max_len)
{
	memcpy(destination + strlen(destination), source,
	       strnlen(source, max_len));
	return destination;
}
