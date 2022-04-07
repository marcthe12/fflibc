#include "io.h"

int scanf(char const *restrict format, ...)
{
	va_list arg;
	va_start(arg, format);
	int lenght = vscanf(format, arg);
	va_end(arg);
	return lenght;
}
