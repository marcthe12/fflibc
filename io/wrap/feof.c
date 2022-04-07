#define NO_OPAQUE_TYPE
#include "io.h"
#include <stdio.h>
#include <wchar.h>

int const _eof_wrap = EOF;
wint_t const _weof_wrap = WEOF;

int _feof_wrap(FILE *stream){
    return feof(stream);
}
