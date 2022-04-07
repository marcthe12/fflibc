#include "io.h"

int vwprintf(wchar_t const *restrict format, va_list arg)
{
	return _vfwprintf_wrap(_stdstream_wrap(stream_output), format, arg);
}
