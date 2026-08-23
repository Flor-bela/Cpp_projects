#include <climits>
#include <iostream>

int		main( void )
{
	// Remember that int is 32bit (4bytes) -> we can check this with sizeof(int);
	// 1 bit: sign bit (the leftmost one, position 32), and 31 bits: integer bits
	// so the maximum value is 2^31 (01000000000000000000000000000000) - 1 (because it includes in the positive part the value 0) == 2,147,483,647 (the most significant bit, the one is the most left position is the sign bit, and zero is for positive!!!)
	// and the minumum value is -2^31 (11000000000000000000000000000000) -> and this one does not include the 0 since it is already in the positive range, so, the minimum value is == 2,147,483,648

	std::cout << "int max is " << INT_MAX << std::endl; 
	std::cout << "int min is " << INT_MIN << std::endl;

	return 0;
}