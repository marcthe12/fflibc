#include "io.h"
#include <errno.h>

int fputs(char const *restrict string, FILE *restrict stream)
{

	for (size_t i = 0; string[i]; ++i) {
        if(_fputc_wrap(string[i], stream)==_eof_wrap){return _eof_wrap;};
	}
	return 0;
}
