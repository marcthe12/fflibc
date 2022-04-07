#include "memory.h"
#include <wchar.h>

double _wcstod_wrap(wchar_t const *restrict string, wchar_t **restrict invalid)
{
	return wcstod(string, invalid);
}
