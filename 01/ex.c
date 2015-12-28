#include <stdio.h>

#include "x.h"

#ifdef X
# define Y printf
#elif defined(Y) && defined(Z)
# warning Both Y and Z defined
#else
# error X undefined
#endif

#define my_macro(x, y)		x
#define my_macro2(x, y)		"TODO"

int main()
{
	puts(my_macro(__FILE__, je));
	puts(my_macro(__DATE__, je));
	puts(my_macro(__TIME__, je));

	puts(my_macro(my_macro2(TIME, STAMP), je));

	return 0;
}
