#if !defined(IO_H)
	#define IO_H

	#include <stdarg.h>
	#include <stddef.h>

	#if __STDC_HOSTED__ == 1
		#include "wrap/io.h"

extern void setbuf(FILE *restrict, char *restrict);
extern void rewind(FILE *);

extern int getchar(void);
extern int putchar(int);
extern int puts(char const *restrict);
extern int fputs(char const *restrict,FILE *restrict);

		#if defined(NEED_WINT)
extern wint_t getwchar(void);
extern wint_t putwchar(wchar_t);
		#endif

extern void perror(char const *);

extern int fprintf(FILE *, char const *restrict, ...);
extern int printf(char const *restrict, ...);
extern int snprintf(char *, size_t, char const *restrict, ...);
extern int asprintf(char **restrict, char const *restrict, ...);
extern int sprintf(char *, char const *restrict, ...);
extern int vprintf(char const *restrict, va_list);
extern int vsprintf(char *, char const *restrict, va_list);
extern int vasprintf(char **restrict, char const *restrict, va_list);
extern int fwprintf(FILE *, wchar_t const *restrict, ...);
extern int wprintf(wchar_t const *restrict, ...);
extern int swprintf(wchar_t *, size_t, wchar_t const *restrict, ...);
extern int aswprintf(wchar_t **restrict, wchar_t const *restrict,
				...);
extern int vwprintf(wchar_t const *restrict, va_list);
extern int vaswprintf(wchar_t **restrict, wchar_t const *restrict,
				 va_list);

extern int fscanf(FILE *, char const *restrict, ...);
extern int scanf(char const *restrict, ...);
extern int sscanf(char const *restrict, char const *restrict, ...);
extern int vscanf(char const *restrict, va_list);
extern int fwscanf(FILE *, wchar_t const *restrict, ...);
extern int swscanf(wchar_t const *restrict, wchar_t const *restrict,
			      ...);
extern int vwscanf(wchar_t const *restrict, va_list);
extern int wscanf(wchar_t const *restrict, ...);

	#endif

#endif
