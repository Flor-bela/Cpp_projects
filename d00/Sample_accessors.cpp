#include <iostream>
#include "Sample_accessors.hpp"

Sample_acc::Sample_acc(void)
{
	std::cout << "Contructor called!" << std::endl;

	this->setFoo(0); // hmm interesante que puedo poner esto aquí antes de declarar la función abajo...
	std::cout << "this->getFoo(): " << this->getFoo() << std::endl;
}

Sample_acc::~Sample_acc(void)
{
	std::cout << "Destructor called!" << std::endl;
}

int	Sample_acc::getFoo(void) const
{
	return (this->_foo);
}

bool	Sample_acc::setFoo(int v)
{
	if (v >= 0)
	{
		this->_foo = v;
		return (true);
	}
	return (false);
}