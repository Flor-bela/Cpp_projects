#include <cmath>
#include <iostream>

int		main( void )
{
	int	fractional_bits = 8;
	int	num = -4;
	int	fixed_point;

	fixed_point = num << fractional_bits;
	std::cout << "fixed point with bits shift is " << fixed_point << std::endl;
	fixed_point = num * (1 << fractional_bits);
	std::cout << "fixed point with multiplication is " << fixed_point << std::endl;


	return 0;
}