#include "maths.h"

ldiv_t ldiv(long numerator, long denominator)
{
	return (ldiv_t){.quot = numerator / denominator,
			.rem = numerator % denominator};
}
