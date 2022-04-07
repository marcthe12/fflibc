#define NO_OPAQUE_TYPE
#include "io.h"
#include <wchar.h>

int _vsnprintf_wrap(char *string, size_t max_size, char const *restrict format,
		    va_list arg)
{
	return vsnprintf(string, max_size, format, arg);
}
