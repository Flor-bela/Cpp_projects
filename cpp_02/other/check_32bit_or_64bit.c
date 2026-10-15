#include <stdio.h>

// to know the compiled program is running in a 32-bit or 64-bit environment:

int	main(void)
{
	if ((sizeof(void*)) == 4)			// if a pointer occupies 4bytes in memory:
		printf("32bit environment");
	if ((sizeof(void*)) == 8)
		printf("64bit environment");	// if a pointer occupies 8bytes in memory:
	else
		printf("What??? :) ");
		
	/* if (sizeof(long) == 8)			// also checking here the size of long int (8bytes)
		printf("it is 8");
	else
		printf("it is not 8"); */

	return (0);
}