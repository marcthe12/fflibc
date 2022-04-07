#include "io.h"

int sscanf(char const *restrict string, char const *restrict format, ...)
{
	va_list arg;
	va_start(arg, format);
	int lenght = _vsscanf_wrap(string, format, arg);
	va_end(arg);
	return lenght;
}
