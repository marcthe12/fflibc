#include "memory.h"

char *strndup(char const *restrict string, size_t max_lenght)
{
	size_t lenght = strnlen(string, max_lenght) + 1;
	char *duplicate = reallocarray(NULL, lenght, sizeof *duplicate);
	if (duplicate != NULL)
		memcpy(duplicate, string, lenght);
	return duplicate;
}
