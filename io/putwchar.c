#define NEED_WINT
#include "io.h"

wint_t putwchar(wchar_t character)
{
	return fputwc(character, _stdstream_wrap(stream_output));
}
