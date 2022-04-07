#include "memory.h"

wchar_t *wcsndup(wchar_t const *restrict string, size_t max_lenght)
{
	size_t lenght = wcsnlen(string, max_lenght) + 1;
	wchar_t *duplicate = reallocarray(NULL, lenght, sizeof *duplicate);
	if (duplicate != NULL)
		wmemcpy(duplicate, string, lenght);
	return duplicate;
}
