#include "../memory.h"
#include "io.h"

int vasprintf(char **string, char const *restrict format, va_list arg)
{
	va_list tmp;
	va_copy(tmp, arg);
	int lenght = _vsnprintf_wrap(NULL, 0, format, tmp);
	va_end(tmp);
	if (lenght < 0) {
		return 1;
	}
	*string = reallocarray(NULL, (size_t)lenght + 1, sizeof *string);
	if (*string == NULL) {
		return 1;
	}
	return _vsnprintf_wrap(*string, (size_t)lenght + 1, format, arg);
}
