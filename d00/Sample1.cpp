#include <iostream>
#include "Sample1.hpp"

Sample1::Sample1(char p1, int p2, float p3)
{
	std::cout << "Contructor called Sample1!" << std::endl;

	this->a1 = p1;
	std::cout << "this->a1 from Sample1 is " << this->a1 << std::endl;

	this->a2 = p2;
	std::cout << "this->a2 from Sample1 is " << this->a2 << std::endl;

	this->a3 = p3;
	std::cout << "this->a3 from Sample1 is " << this->a3 << std::endl;

}

Sample1::~Sample1(void)
{
	std::cout << "Destructor called!" << std::endl;
}
