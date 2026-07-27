#include "Sample.hpp"
#include <iostream>

int	main(void)
{
	Sample	object;

	object.foo = 42;
	std::cout << "object.foo is " << object.foo << std::endl;

	object.bar();
	
	return (0);
}