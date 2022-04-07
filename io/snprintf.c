#include "io.h"

int snprintf(char *string, size_t max_size, char const *restrict format, ...)
{
	va_list arg;
	va_start(arg, format);
	int lenght = _vsnprintf_wrap(string, max_size, format, arg);
	va_end(arg);
	return lenght;
}
