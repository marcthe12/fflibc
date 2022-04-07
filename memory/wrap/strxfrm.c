#include "memory.h"
#include <string.h>

size_t _strxfrm_wrap(char *restrict destination, char const *restrict source,
		     size_t count)
{
	return strxfrm(destination, source, count);
}
