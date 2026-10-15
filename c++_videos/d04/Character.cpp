#include "Character.hpp"
#include <iostream>

Character::Character( void )
{
	std::cout << "Default Constructor called for Character" << std::endl;
}

Character::Character( Character const & src ) // no tengo nada para copiar
{
	(void)src;
	std::cout << "Copy Constructor called for Character" << std::endl;
}

Character::~Character( void )
{
	std::cout << "Destructor called for Character" << std::endl;
}

Character&	Character::operator=( Character const & src )
{
	(void)src; // no tengo nada para copiar
	return *this;
}

void	Character::sayHello( void )
{
	std::cout << "Hello :) " << std::endl;
}