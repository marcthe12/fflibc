#if !defined(IO_WRAP_H)
	#define IO_WRAP_H

	#include <stdarg.h>
	#include <stddef.h>

	#if __STDC_HOSTED__ == 1

		#if defined(NEED_WINT)
			#include <wchar.h>
			#define NO_OPAQUE_TYPE

		#endif

		#if defined(NO_OPAQUE_TYPE)
			#include <stdio.h>
		#else
typedef struct {
	char file;
} FILE;
		#endif

#if defined(NEED_WINT)
extern wint_t const weof;

extern wint_t _fgetwc_wrap(FILE *);
extern wint_t _fputwc_wrap(wint_t, FILE *);
#endif

extern int const _eof_wrap;

extern int _feof_wrap(FILE *stream);

extern int _setvbuf_wrap(FILE *restrict file, char *restrict buffer, int mode,
		  size_t size);

extern int _fgetc_wrap(FILE *);
extern int _fputc_wrap(int, FILE *);

extern int _vfprintf_wrap(FILE *, char const *restrict, va_list);
extern int _vsnprintf_wrap(char *, size_t, char const *restrict, va_list);
extern int _vfwprintf_wrap(FILE *, wchar_t const *restrict, va_list);
extern int _vswprintf_wrap(wchar_t *, size_t, wchar_t const *restrict, va_list);

int _vfscanf_wrap(FILE *, char const *restrict, va_list);
int _vsscanf_wrap(char const *restrict, char const *restrict, va_list);
int _vfwscanf_wrap(FILE *, wchar_t const *restrict, va_list);
int _vswscanf_wrap(wchar_t const *restrict, wchar_t const *restrict, va_list);

enum stdstream_list { stream_input, stream_output, stream_error };

FILE *_stdstream_wrap(enum stdstream_list);

	#endif

#endif
