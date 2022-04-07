#include "io.h"

int vprintf(char const *restrict format, va_list arg)
{
	return _vfprintf_wrap(_stdstream_wrap(stream_output), format, arg);
}
