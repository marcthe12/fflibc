#include "io.h"

int fscanf(FILE *stream, char const *restrict format, ...)
{
	va_list arg;
	va_start(arg, format);
	int lenght = _vfscanf_wrap(stream, format, arg);
	va_end(arg);
	return lenght;
}
