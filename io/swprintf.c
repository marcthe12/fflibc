#include "io.h"

int swprintf(wchar_t *string, size_t max_size, wchar_t const *restrict format,
	     ...)
{
	va_list arg;
	va_start(arg, format);
	int lenght = _vswprintf_wrap(string, max_size, format, arg);
	va_end(arg);
	return lenght;
}
