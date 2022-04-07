#define NO_OPAQUE_TYPE
#include "io.h"
#include <stdio.h>

FILE *_stdstream_wrap(enum stdstream_list streams)
{
	switch (streams) {
		case stream_input:
			return stdin;
		case stream_output:
			return stdout;
		case stream_error:
			return stderr;
	}
	return NULL;
}
