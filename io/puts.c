#include "io.h"
#include <errno.h>

int puts(char const *string)
{
	if (fputs(string, _stdstream_wrap(stream_output)) == _eof_wrap) {
		return _eof_wrap;
	}
	return putchar('\n');
}
