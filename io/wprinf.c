#include "io.h"

int wprintf(wchar_t const *restrict format, ...)
{
	va_list arg;
	va_start(arg, format);
	int lenght = vwprintf(format, arg);
	va_end(arg);
	return lenght;
}
