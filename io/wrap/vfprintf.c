#define NO_OPAQUE_TYPE
#include "io.h"

int _vfprintf_wrap(FILE *stream, char const *restrict format, va_list arg)
{
	return vfprintf(stream, format, arg);
}
