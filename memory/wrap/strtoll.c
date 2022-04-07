#include "memory.h"
#include <stdlib.h>

long long _strtoll_wrap(char const *restrict string, char **restrict invalid,
			int base)
{
	return strtoll(string, invalid, base);
}
