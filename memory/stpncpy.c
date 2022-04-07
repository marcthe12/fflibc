#include "memory.h"

char *stpncpy(char *destination, char const *source, size_t count)
{
	char *result = memccpy(destination, source, '\0', count);
	result = (result == NULL) ? &destination[count] : (result - 1);
	memset(result, 0, (size_t)(&destination[count] - result));
	return result;
}
