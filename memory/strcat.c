#include "memory.h"

char *strcat(char *restrict destination, char const *restrict source)
{
	strcpy(destination + strlen(destination), source);
	return destination;
}
