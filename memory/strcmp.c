#include "memory.h"

int strcmp(char const *string1, char const *string2)
{
	return rawmemccmp(string1, string2, '\0');
}
