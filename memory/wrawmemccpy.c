#include "memory.h"

wchar_t *wrawmemccpy(wchar_t *restrict destination,
		     wchar_t const *restrict source, wchar_t value)
{
	for (size_t i = 0;; i++) {
		destination[i] = source[i];
		if (destination[i] == value)
			return &destination[i + 1];
	}
}
