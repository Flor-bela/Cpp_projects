#include <iostream>
#include "Sample_pointers2.hpp"

Sample_pointer2::Sample_pointer2(void)
{
	std::cout << "Contructor called" << std::endl;
	this->foo = 0;
}

Sample_pointer2::~Sample_pointer2(void)
{
	std::cout << "Destructor called" << std::endl;
}

void	Sample_pointer2::bar(void) const
{
	std::cout << "Member function called" << std::endl;
}