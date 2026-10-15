#include "Sample.hpp"
#include <iostream>

Sample::Sample(void)
{
	std::cout << "Constructor called!" << std::endl;
	return ; // we do not need to add this, since a constructor do not return even void
}

Sample::~Sample(void)
{
	std::cout << "Destructor called!" << std::endl;
	return ; // we do not need to add this, since a destructor do not return even void
}

void	Sample::bar(void)
{
	std::cout << "Member function bar called" << std::endl;
	return ;
}
