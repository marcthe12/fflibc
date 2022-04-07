#include "io.h"

int asprintf(char **string, char const *restrict format, ...)
{
	va_list arg;
	va_start(arg, format);
	int lenght = vasprintf(string, format, arg);
	va_end(arg);
	return lenght;
}
