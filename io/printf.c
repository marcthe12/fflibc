#include "io.h"

int printf(char const *restrict format, ...)
{
	va_list arg;
	va_start(arg, format);
	int lenght = vprintf(format, arg);
	va_end(arg);
	return lenght;
}
