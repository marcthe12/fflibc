#define NEED_WINT
#include "io.h"

wint_t _fgetwc_wrap(FILE *stream) { return getc(stream); }
