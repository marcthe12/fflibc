#include "memory.h"

long long wtoll(wchar_t const *string)
{
	return _wcstoll_wrap(string, NULL, 10);
}
