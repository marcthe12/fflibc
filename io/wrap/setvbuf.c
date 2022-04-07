#define NO_OPAQUE_TYPE
#include "io.h"

int _setvbuf_wrap(FILE *restrict file, char *restrict buffer, int mode,
		  size_t size)
{
	return setvbuf(file, buffer, mode, size);
}
