#include <stdio.h>
#include "x.h"

#ifdef X
# define Y printf
#elif defined(Y) && defined(Z)
# warning Both Y and Z defined
#else
# error X undefined
#endif

int main()
{
	return 0;
}
