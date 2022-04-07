#include "memory.h"

wchar_t *wmemset(wchar_t *buffer, wchar_t value, size_t size)
{
	for (size_t i = 0; i < size; i++)
		buffer[i] = value;
	return buffer;
}
