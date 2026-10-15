#include <iostream>
#include "Sample_pointer.hpp"

int	main(void)
{
	Sample_pointer	object(0); // the attribute is initialised in the constructor.
	Sample_pointer	*object_cp = &object;

	std::cout << "object foo is " << object.foo << std::endl;
	std::cout << "object_cp foo is " << object_cp->foo << std::endl;

	// Pointer to the member attribute:
	int	Sample_pointer::*p = NULL;
	p = &Sample_pointer::foo;

	object.*p = 42;
	std::cout << "object foo with *p is " << object.foo << std::endl;
	std::cout << "object_cp foo with *p is " << object_cp->foo << std::endl;

	object_cp->*p = 21;

	std::cout << "object foo with *p is " << object.foo << std::endl;
	std::cout << "object_cp foo with *p is " << object_cp->foo << std::endl;

	//////////////////////////////////////////
	// Pointer to member function:
	void	(Sample_pointer::*f)(void) const;
	f = &Sample_pointer::bar;

	(object.*f)();
	(object_cp->*f)();
	// doesn' work: std::cout << "object.*f " << (object.*f)() << std::endl;
	// doesn' work: std::cout << "object.*f " << (object_cp->*f)() << std::endl;

	return (0);
}