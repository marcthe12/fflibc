#define NO_OPAQUE_TYPE
#include "io.h"

int _vfscanf_wrap(FILE *stream, char const *restrict format, va_list arg)
{
	return vfscanf(stream, format, arg);
}
