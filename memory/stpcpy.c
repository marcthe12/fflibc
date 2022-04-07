#include "memory.h"

char *stpcpy(char *destination, char const *source)
{
	return (char *)rawmemccpy(destination, source, '\0') - 1;
}
