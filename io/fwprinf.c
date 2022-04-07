#include "io.h"

int fwprintf(FILE *stream, wchar_t const *restrict format, ...)
{
	va_list arg;
	va_start(arg, format);
	int lenght = _vfwprintf_wrap(stream, format, arg);
	va_end(arg);
	return lenght;
}
