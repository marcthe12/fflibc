#define NO_OPAQUE_TYPE
#include "io.h"
#include <wchar.h>

int _vswprintf_wrap(wchar_t *string, size_t max_size,
		    wchar_t const *restrict format, va_list arg)
{
	return vswprintf(string, max_size, format, arg);
}
