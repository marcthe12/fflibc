#include "memory.h"
#include <stdlib.h>

double _strtod_wrap(char const *restrict string, char **restrict invalid)
{
	return strtod(string, invalid);
}
