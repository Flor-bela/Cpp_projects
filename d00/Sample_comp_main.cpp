#include <iostream>
#include "Sample_comp.hpp"

int	main(void)
{
	Sample_comp	object1(42);
	Sample_comp	object2(21);

	if (&object1 == &object1)
		std::cout << "object1 and object1 are physically identical" << std::endl;
	else
		std::cout << "object1 and object1 are not physically identical" << std::endl;

	if (&object1 == &object2)
		std::cout << "object1 and object2 are physically identical" << std::endl;
	else
		std::cout << "object1 and object2 are not physically identical" << std::endl;

	if (object1.compFoo(&object2) == 0)
		std::cout << "object1 and object2 are structurally identical" << std::endl;
	else
		std::cout << "object1 and object2 are not structurally identical" << std::endl;

	int	result_comp = object1.compFoo(&object2);
	if (result_comp == 1)
		std::cout << "object1 _foo is bigger than object2 _foo " << std::endl;
	else if (result_comp == -1)
		std::cout << "object1 _foo is smaller than object2 _foo " << std::endl;
	else
		std::cout << "object1 _foo is equal to object2 _foo " << std::endl;

	return (0);
}