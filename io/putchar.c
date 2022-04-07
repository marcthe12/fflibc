#include "io.h"

int putchar(int character)
{
	return _fputc_wrap(character, _stdstream_wrap(stream_output));
}
