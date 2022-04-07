#define NEED_WINT
#include "io.h"

wint_t getwchar(void) { return fgetwc(_stdstream_wrap(stream_input)); }
