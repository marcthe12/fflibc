#include "io.h"

int getchar(void) { return _fgetc_wrap(_stdstream_wrap(stream_input)); }
