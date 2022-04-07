#if !defined(MEMORY_H)
	#define MEMORY_H

	#include <stddef.h>

extern  void *memset(void *, int, size_t);
extern  wchar_t *wmemset(wchar_t *, wchar_t, size_t);

extern  void *memchr(void const *, int, size_t);
extern  void *memrchr(void const *, int, size_t);
extern  size_t memlchr(void const *, int, size_t);
extern  void *rawmemchr(void const *, int);
extern  size_t rawmemlchr(void const *, int);
extern  wchar_t *wmemchr(wchar_t const *, wchar_t, size_t);
extern  wchar_t *wmemrchr(wchar_t const *, wchar_t, size_t);
extern  size_t wmemlchr(wchar_t const *, wchar_t, size_t);
extern  wchar_t *wrawmemchr(wchar_t const *, wchar_t);
extern  size_t wrawmemlchr(wchar_t const *, wchar_t);
extern  char *strchr(char const *, int);
extern  char *strrchr(char const *, int);
extern  wchar_t *wcschr(wchar_t const *, wchar_t);
extern  wchar_t *wcsrchr(wchar_t const *, wchar_t);

extern  int memcmp(void const *, void const *, size_t);
extern  int memccmp(void const *, void const *, int, size_t);
extern  int rawmemccmp(void const *, void const *, unsigned char);
extern  int wmemcmp(wchar_t const *, wchar_t const *, size_t);
extern  int wmemccmp(wchar_t const *, wchar_t const *, wchar_t, size_t);
extern  int wrawmemccmp(wchar_t const *, wchar_t const *, wchar_t);
extern  int strncmp(char const *, char const *, size_t);
extern  int strcmp(char const *, char const *);
extern  int wcsncmp(wchar_t const *, wchar_t const *, size_t);
extern  int wcscmp(wchar_t const *, wchar_t const *);

extern  void *mempcpy(void *restrict, void const *restrict, size_t);
extern  void *memccpy(void *restrict, void const *restrict, int, size_t);
extern  void *rawmemccpy(void *restrict, void const *restrict, int);
extern  void *memcpy(void *restrict, void const *restrict, size_t);
extern  void *memmove(void *restrict, void const *restrict, size_t);
extern  wchar_t *wmempcpy(wchar_t *restrict, wchar_t const *restrict,
			     size_t);
extern  wchar_t *wmemccpy(wchar_t *restrict, wchar_t const *restrict,
			     wchar_t, size_t);
extern  wchar_t *wrawmemccpy(wchar_t *restrict, wchar_t const *restrict,
				wchar_t);
extern  wchar_t *wmemcpy(wchar_t *restrict, wchar_t const *restrict, size_t);
extern  wchar_t *wmemmove(wchar_t *restrict, wchar_t const *restrict,
			     size_t);
extern  char *stpcpy(char *, char const *);
extern  char *stpncpy(char *, char const *, size_t);
extern  char *strncpy(char *, char const *, size_t);
extern  char *strcpy(char *, char const *);
extern  size_t strlcpy(char *, char const *, size_t);
extern  wchar_t *wcspcpy(wchar_t *, wchar_t const *);
extern  wchar_t *wcspncpy(wchar_t *, wchar_t const *, size_t);
extern  wchar_t *wcsncpy(wchar_t *, wchar_t const *, size_t);
extern  wchar_t *wcscpy(wchar_t *, wchar_t const *);
extern  size_t wcslcpy(wchar_t *, wchar_t const *, size_t);

extern  size_t strnlen(char const *, size_t);
extern  size_t strnlen_s(char const *, size_t);
extern  size_t strlen(char const *);
extern  size_t wcsnlen(wchar_t const *, size_t);
extern  size_t wcsnlen_s(wchar_t const *, size_t);
extern  size_t wcslen(wchar_t const *);

extern  char *strcat(char *restrict, char const *restrict);
extern  char *strncat(char *restrict, char const *restrict, size_t);
extern  wchar_t *wcscat(wchar_t *restrict, wchar_t const *restrict);
extern  wchar_t *wcsncat(wchar_t *restrict, wchar_t const *restrict, size_t);
extern  size_t strlcat(char *, char const *, size_t);
extern  size_t wcslcat(wchar_t *, wchar_t const *, size_t);

	#if __STDC_HOSTED__ == 1

		#include "wrap/memory.h"

extern  double atof(char const *);
extern  long atol(char const *);
extern  long long atoll(char const *);
extern  int atoi(char const *);
extern  double wtof(wchar_t const *);
extern  long wtol(wchar_t const *);
extern  long long wtoll(wchar_t const *);
extern  int wtoi(wchar_t const *);

extern  void *calloc(size_t, size_t);
extern  void *reallocarray(void *buffer, size_t count, size_t size);

extern  char *strdup(char const *);
extern  char *strndup(char const *, size_t);
extern  wchar_t *wcsdup(wchar_t const *);
extern  wchar_t *wcsndup(wchar_t const *, size_t);

extern  int strcoll(char const *, char const *);
extern  int wcscoll(wchar_t const *, wchar_t const *);

	#endif

#endif
