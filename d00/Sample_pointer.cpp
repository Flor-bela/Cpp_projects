#include <iostream>
#include "Sample_pointer.hpp"

Sample_pointer::Sample_pointer(int v) : foo(v)
{
	std::cout << "Contructor called" << std::endl;
}

Sample_pointer::~Sample_pointer(void)
{
	std::cout << "Destructor called" << std::endl;
}

void	Sample_pointer::bar(void) const
{
	std::cout << "Member function called" << std::endl;
	return ;
}