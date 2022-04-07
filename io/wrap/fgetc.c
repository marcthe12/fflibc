#define NO_OPAQUE_TYPE
#include "io.h"

int _fgetc_wrap(FILE *stream) { return getc(stream); }
