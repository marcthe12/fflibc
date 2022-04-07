#include "io.h"

int wscanf(wchar_t const *restrict format, ...)
{
	va_list arg;
	va_start(arg, format);
	int lenght = vwscanf(format, arg);
	va_end(arg);
	return lenght;
}
