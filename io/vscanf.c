#include "io.h"

int vscanf(char const *restrict format, va_list arg)
{
	return _vfscanf_wrap(_stdstream_wrap(stream_input), format, arg);
}
