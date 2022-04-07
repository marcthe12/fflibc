#include "io.h"

int fwscanf(FILE *stream, wchar_t const *restrict format, ...)
{
	va_list arg;
	va_start(arg, format);
	int lenght = _vfwscanf_wrap(stream, format, arg);
	va_end(arg);
	return lenght;
}
