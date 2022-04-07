#include "memory.h"
#include <wchar.h>

long long _wcstoll_wrap(wchar_t const *restrict string,
			wchar_t **restrict invalid, int base)
{
	return wcstoll(string, invalid, base);
}
