#include <iostream>
#include "Sample_static.hpp"

void	f0(void)
{
	Sample_static	object2;
	std::cout << "3 (2): # of instances is " << Sample_static::getfoo() << std::endl;
	return ;
}


void	f1(void)
{
	Sample_static	object1;
	
	std::cout << "2 (1): # of instances is " << Sample_static::getfoo() << std::endl;
	f0();
	std::cout << "4 (1): # of instances is " << Sample_static::getfoo() << std::endl;
	return ;
}


int	main(void)
{
	// it seems like we can call the non_member attributes without instantiating it first...
	std::cout << "1 (0): # of instances is " << Sample_static::getfoo() << std::endl;

	// Since we still do not know how to allocate with classes, we need to instantiate new classes "manually" like inside different functions
	f1(); // Everytime we leave a function, the destructor is called, so it will delete the instances!!!
	std::cout << "5 (0): # of instances is " << Sample_static::getfoo() << std::endl;

	return (0);
}