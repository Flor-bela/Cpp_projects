#include <iostream>
#include "Sample_comp.hpp"

Sample_comp::Sample_comp(int v)
{
	std::cout << "Contructor called" << std::endl;

	this->_foo = v;
}

Sample_comp::~Sample_comp(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Sample_comp::getFoo(void) const
{
	return (this->_foo);
}

int	Sample_comp::compFoo(Sample_comp *other)
{
	if (this->_foo > other->_foo)
		return (1);
	else if (this->_foo < other->_foo)
		return (-1);
	return (0);
}

