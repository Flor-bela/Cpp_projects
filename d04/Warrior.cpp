#include "Character.hpp"
#include "Warrior.hpp"
#include <iostream>

Warrior::Warrior( void ) : Character()
{
	std::cout << "Default Constructor called for Warrior" << std::endl;
}

Warrior::Warrior( Warrior const & src ) : Character(src)
{
	std::cout << "Copy Constructor called for Warrior" << std::endl;
}

Warrior::~Warrior( void )
{
	std::cout << "Destructor called for Warrior" << std::endl;
}

Warrior&	Warrior::operator=( Warrior const & src )
{
	if (this != &src) // para evitar auto-asignación!
		Character::operator=(src); // Aunque no haya variables, heredamos los métodos y, lo más importante, el tipo. Al heredar, el compilador sabe que un Warrior "es un" Character. Esto es lo que permite el polimorfismo (por ejemplo, usar un puntero Character* para manejar un objeto Warrior).
	return *this;
}

void	Warrior::sayHello( void )
{
	std::cout << "Go away!" << std::endl;
}