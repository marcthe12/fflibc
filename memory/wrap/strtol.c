#include "memory.h"
#include <stdlib.h>

long _strtol_wrap(char const *restrict string, char **restrict invalid,
		  int base)
{
	return strtol(string, invalid, base);
}
