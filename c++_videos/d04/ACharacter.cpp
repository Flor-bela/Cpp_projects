#include "ACharacter.hpp"
#include <string>
#include <iostream>

void	ACharacter::attack( std::string const & target )
{
	std::cout << "I am ACharacter and I attack you! " << target << std::endl; // es pure method, pero sí deja implementarlo en su classe, solo que para las classes derivadas necesitan reescribirlo para dejar de ser abstractas
}


void	ACharacter::sayHello( std::string const & target)
{
	std::cout << "Hello from ACharacter " << target << std::endl;
}
