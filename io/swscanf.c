#include "io.h"

int swscanf(wchar_t const *restrict string, wchar_t const *restrict format, ...)
{
	va_list arg;
	va_start(arg, format);
	int lenght = _vswscanf_wrap(string, format, arg);
	va_end(arg);
	return lenght;
}
