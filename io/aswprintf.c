#define NO_OPAQUE_TYPE
#include "io.h"

int aswprintf(wchar_t **string, wchar_t const *restrict format, ...)
{
	va_list arg;
	va_start(arg, format);
	int lenght = vaswprintf(string, format, arg);
	va_end(arg);
	return lenght;
}
