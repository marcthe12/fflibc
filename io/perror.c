#include "io.h"
#include <errno.h>
#include <string.h>

void perror(char const *string)
{

	fprintf(_stdstream_wrap(stream_error), "%s: %s", string,
		strerror(errno));
}
