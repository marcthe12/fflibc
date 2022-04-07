#include "memory.h"
#include <wchar.h>

long _wcstol_wrap(wchar_t const *restrict string, wchar_t **restrict invalid,
		  int base)
{
	return wcstol(string, invalid, base);
}
