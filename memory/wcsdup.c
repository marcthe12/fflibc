#include "memory.h"

wchar_t *wcsdup(wchar_t const *restrict string)
{
	size_t lenght = wcslen(string) + 1;
	wchar_t *duplicate = reallocarray(NULL, lenght, sizeof *duplicate);
	if (duplicate != NULL)
		wmemcpy(duplicate, string, lenght);
	return duplicate;
}
