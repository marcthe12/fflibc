#define NO_OPAQUE_TYPE
#include "io.h"
#include <wchar.h>

int _vfwprintf_wrap(FILE *stream, wchar_t const *restrict format, va_list arg)
{
	return vfwprintf(stream, format, arg);
}
