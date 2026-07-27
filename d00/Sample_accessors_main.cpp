#include <iostream>
#include "Sample_accessors.hpp"

int	main(void)
{
	Sample_acc	object;
	bool		result;

	std::cout << "Foo is " << object.getFoo() << std::endl;

	result = object.setFoo(42);
	std::cout << "Foo is " << object.getFoo() << std::endl;
	std::cout << "result is " << result << std::endl;

	result = object.setFoo(-42);
	std::cout << "result is " << result << std::endl;

	return (0);

}