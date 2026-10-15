#include <iostream>
#include "Sample_priv.hpp"

Sample_priv::Sample_priv(void)
{
	std::cout << "Constructor called!" << std::endl;
	
	Sample_priv::foo = 0; // en realidad esta es otra manera...no sé si no debería usar esta, pero bueno...
	std::cout << "Sample_priv::foo is " << Sample_priv::foo << std::endl; 
	
	this->foo = 5;
	this->_bar = 0;
	std::cout << "this->foo is " << this->foo << std::endl;
	std::cout << "this->_bar is " << this->_bar << std::endl;

}

Sample_priv::~Sample_priv(void)
{
	std::cout << "Destructor called!" << std::endl;
}

void	Sample_priv::ft_foo(void)
{
	std::cout << "ft_foo called" << std::endl;
	return ;
}

// Parece que si comento esta función que está en private también funciona!!!
void	Sample_priv::_ft_bar(void)
{
	std::cout << "_ft_bar called" << std::endl;
	return ;
}
