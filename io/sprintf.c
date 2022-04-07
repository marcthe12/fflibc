#include "io.h"

int sprintf(char *string, char const *restrict format, ...)
{
	va_list arg;
	va_start(arg, format);
	int lenght = vsprintf(string, format, arg);
	va_end(arg);
	return lenght;
}
