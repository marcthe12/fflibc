#include "io.h"
#include <limits.h>

int vsprintf(char *string, char const *restrict format, va_list arg)
{
	return _vsnprintf_wrap(string, INT_MAX, format, arg);
}
