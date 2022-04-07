#define NO_OPAQUE_TYPE
#include "io.h"
#include <wchar.h>

int _vswscanf_wrap(wchar_t const *restrict string,
		   wchar_t const *restrict format, va_list arg)
{
	return vswscanf(string, format, arg);
}
