#include "maths.h"

imaxdiv_t imaxdiv(intmax_t numerator, intmax_t denominator)
{
	return (imaxdiv_t){.quot = numerator / denominator,
			   .rem = numerator % denominator};
}
