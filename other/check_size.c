#include <stdio.h>

int	main()
{
	int		i = 5;
	float	f = 5;
	double	d = 5;


	printf("size of i is: %lu\n", sizeof(i)); // =4
	printf("size of f is: %lu\n", sizeof(f)); // =4
	printf("size of d is: %lu\n", sizeof(d)); // =8

	return 0;
}