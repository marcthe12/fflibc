#include "io.h"

int fprintf(FILE *stream, char const *restrict format, ...)
{
	va_list arg;
	va_start(arg, format);
	int lenght = _vfprintf_wrap(stream, format, arg);
	va_end(arg);
	return lenght;
}
