#include <iostream>
#include "Sample_pointers2.hpp"
/* 
int	main(void)
{
	Sample_pointer2	object1;
	int				Sample_pointer2::*p;
	void			(Sample_pointer2::*f)(void) const;

	p = &Sample_pointer2::foo;
	f = &Sample_pointer2::bar;

	std::cout << "object1 foo is " << object1.foo << std::endl;

	object1.*p = 24;
	std::cout << "object1 foo now is " << object1.foo << std::endl;

	(object1.*f)(); // we called the member function bar with this member function pointer *f
	
	return (0);
} */

// Now also with a pointer to a class object...
int	main(void)
{
	Sample_pointer2	object1;
	Sample_pointer2	*object1_ptr;// it points exactly to the object1
	int				(Sample_pointer2::*p);
	void			(Sample_pointer2::*f)(void) const;

	object1_ptr = &object1;
	p = &Sample_pointer2::foo;
	f = &Sample_pointer2::bar;
	
	// Pointer to member attribute foo
	object1.*p = 24;
	std::cout << "object1::foo is " << object1.foo << std::endl;
	object1_ptr->*p = 42;
	std::cout << "object1::foo now is " << object1.foo << std::endl;

	// Pointer to member function bar
	(object1.*f)(); // it must print what is inside object1.bar
	(object1_ptr->*f)(); // it must print what is inside object1.bar

	return (0);
}