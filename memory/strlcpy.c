#include "memory.h"

size_t strlcpy(char *destination, char const *source, size_t count)
{
	char *result = memccpy(destination, source, '\0', count);
	result = (result == NULL) ? &destination[count] : (result - 1);
	*result = '\0';
	return strlen(source);
}
