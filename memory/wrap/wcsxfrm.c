#include "memory.h"
#include <wchar.h>

size_t _wcsxfrm_wrap(wchar_t *restrict destination,
		     wchar_t const *restrict source, size_t count)
{
	return wcsxfrm(destination, source, count);
}
