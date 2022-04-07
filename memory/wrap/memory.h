#ifndef MEMORY_WRAP_H
#define MEMORY_WRAP_H

#include <stddef.h>

#if __STDC_HOSTED__ == 1
extern void _free_wrap(void *ptr);
extern void *_realloc_wrap(void *ptr, size_t size);

extern long _strtol_wrap(char const *restrict, char **restrict, int);
extern long long _strtoll_wrap(char const *restrict, char **restrict, int);
extern double _strtod_wrap(char const *restrict, char **restrict);
extern long _wcstol_wrap(wchar_t const *restrict, wchar_t **restrict, int);
extern long long _wcstoll_wrap(wchar_t const *restrict, wchar_t **restrict,
			       int);
extern double _wcstod_wrap(wchar_t const *restrict, wchar_t **restrict);

extern size_t _strxfrm_wrap(char *restrict destination,
			    char const *restrict source, size_t count);
extern size_t _wcsxfrm_wrap(wchar_t *restrict destination,
			    wchar_t const *restrict source, size_t count);

#endif

#endif
