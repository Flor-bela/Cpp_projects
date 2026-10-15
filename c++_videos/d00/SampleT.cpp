#include <iostream>
#include "SampleT.hpp"

SampleT::SampleT(void)
{
	std::cout << "Constructor called!" << std::endl;
	
	this->foo = 42; // with the word "this" we have a pointer to the attributes or functions we have inside the class and we can initiate them here in the constructor!
	std::cout << "this->foo is " << this->foo << std::endl;

	this->bar();
}

SampleT::~SampleT(void)
{
	std::cout << "Destructor called!" << std::endl;
}

void	SampleT::bar(void)
{
	std::cout << "Member function called!" << std::endl;
}
