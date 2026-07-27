#include <iostream>
#include "Sample_priv.hpp"

int	main(void)
{
	Sample_priv	object;

	object.foo = 42;
	//object._bar = 5; // esto no se puede porque _bar es privado!
	object.ft_foo();

	
	std::cout << "foo is " <<object.foo << std::endl;
	// std::cout << "bar is " <<object._bar << std::endl; // Esto no se puede, porque _bar es privado!

	return (0);
}