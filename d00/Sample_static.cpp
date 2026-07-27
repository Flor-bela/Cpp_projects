#include <iostream>
#include "Sample_static.hpp"

Sample_static::Sample_static(void)
{
	std::cout << "Constructor called" << std::endl;
	//Sample_static::_foo++;// this will be a counter
	// or
	Sample_static::_foo += 1;
}

Sample_static::~Sample_static(void)
{
	std::cout << "Destructor called" << std::endl;
	//Sample_static::_foo--;
	// or
	Sample_static::_foo -= 1;
}

int	Sample_static::getfoo(void)
{
	return (Sample_static::_foo); // how to return a non-member attribute in a non_member function by calling the class name before, here we cannot use this->_foo!!!
}


int	Sample_static::_foo = 0; // initiate the non-member attribute