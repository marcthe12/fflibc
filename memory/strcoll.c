#include "memory.h"

struct array_container {
	char *string;
	size_t lenght;
};

int strcoll(char const *string1, char const *string2)
{
	char const *string[2] = {string1, string2};
	struct array_container normalized[2];

	for (size_t i = 0; i < ((sizeof normalized) / (sizeof normalized[0]));
	     i++) {
		normalized[i].lenght = 1 + _strxfrm_wrap(NULL, string[i], 0);
		normalized[i].string = reallocarray(
		    NULL, normalized[i].lenght, sizeof *(normalized[i].string));
		_strxfrm_wrap(normalized[i].string, string[i],
			      normalized[i].lenght);
	}

	int res = strcmp(normalized[0].string, normalized[1].string);

	for (size_t i = 0; i < ((sizeof normalized) / (sizeof normalized[0]));
	     i++)
		_free_wrap(normalized[i].string);
	return res;
}
