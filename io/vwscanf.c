#include "io.h"

int vwscanf(wchar_t const *restrict format, va_list arg)
{
	return _vfwscanf_wrap(_stdstream_wrap(stream_input), format, arg);
}
