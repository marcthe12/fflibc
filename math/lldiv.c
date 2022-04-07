#include "maths.h"

lldiv_t lldiv(long long numerator, long long denominator)
{
	return (lldiv_t){.quot = numerator / denominator,
			 .rem = numerator % denominator};
}
