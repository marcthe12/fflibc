#include "memory.h"

char *strdup(char const *restrict string)
{
	size_t lenght = strlen(string) + 1;
	char *duplicate = reallocarray(NULL, lenght, sizeof *duplicate);
	if (duplicate != NULL)
		memcpy(duplicate, string, lenght);
	return duplicate;
}
