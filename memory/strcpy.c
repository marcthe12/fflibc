#include "memory.h"

char *strcpy(char *destination, char const *source)
{
	stpcpy(destination, source);
	return destination;
}
