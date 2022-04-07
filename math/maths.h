#if !defined(MATH_H)
	#define MATH_H

	#include <stdint.h>

extern int abs(int n);
extern long labs(long n);
extern long long llabs(long long n);
extern intmax_t imaxabs(intmax_t n);
extern float fabsf(float n);
extern double fabs(double n);
extern long double fabsl(long double n);

	#if __STDC_HOSTED__ == 1
		#include <inttypes.h>
		#include <stdlib.h>
	#else

typedef struct {
	int quot, rem;
} div_t;

typedef struct {
	long quot, rem;
} ldiv_t;

typedef struct {
	long long quot, rem;
} lldiv_t;

typedef struct {
	intmax_t quot, rem;
} imaxdiv_t;
	#endif

extern div_t div(int numerator, int denominator);
extern ldiv_t ldiv(long numerator, long denominator);
extern lldiv_t lldiv(long long numerator, long long denominator);
extern imaxdiv_t imaxdiv(intmax_t numerator, intmax_t denominator);

#endif
