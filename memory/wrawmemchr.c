#include "memory.h"

wchar_t *wrawmemchr(wchar_t const *buffer, wchar_t value)
{
	for (size_t i = 0;; i++)
		if (buffer[i] == value)
			return (wchar_t *)&buffer[i];
}
