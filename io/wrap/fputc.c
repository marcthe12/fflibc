#define NO_OPAQUE_TYPE
#include "io.h"

int _fputc_wrap(int character, FILE *stream)
{
	return fputc(character, stream);
}
