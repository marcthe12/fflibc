#define NO_OPAQUE_TYPE
#include "io.h"

void rewind(FILE *stream) { fseek(stream, 0L, SEEK_SET); }
