#include "../memory.h"
#include "io.h"

int vaswprintf(wchar_t **string, wchar_t const *restrict format, va_list arg)
{
	va_list tmp;
	va_copy(tmp, arg);
	int lenght = _vswprintf_wrap(NULL, 0, format, tmp);
	va_end(tmp);
	if (lenght < 0) {
		return 1;
	}
	*string = reallocarray(NULL, (size_t)lenght + 1, sizeof *string);
	if (*string == NULL) {
		return 1;
	}
	return _vswprintf_wrap(*string, (size_t)lenght + 1, format, arg);
}
