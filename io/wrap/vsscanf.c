#define NO_OPAQUE_TYPE
#include "io.h"

int _vsscanf_wrap(char const *restrict string, char const *restrict format,
		  va_list arg)
{
	return vsscanf(string, format, arg);
}
