#define NO_OPAQUE_TYPE
#include "io.h"

void setbuf(FILE *restrict file, char *restrict buffer)
{
	(buffer == NULL) ? _setvbuf_wrap(file, NULL, _IONBF, 0)
			 : _setvbuf_wrap(file, buffer, _IOFBF, BUFSIZ);
}
