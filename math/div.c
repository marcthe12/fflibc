#include "maths.h"

div_t div(int numerator, int denominator)
{
	return (div_t){.quot = numerator / denominator,
		       .rem = numerator % denominator};
}
