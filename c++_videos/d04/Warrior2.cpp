#include "ACharacter.hpp"
#include "Warrior2.hpp"
#include <string>
#include <iostream>

void	Warrior2::attack( std::string const & target )
{
	// puedo hacer una de las dos!
	//ACharacter::attack(target); // **en realidad puedo hacer esto; está obligada la clase hija a reescribir la función, pero puede aprovechar así si attack está implementada en la classe ACharacter, aunque sea pure method!
	std::cout << "I am Warrior2 and I attack you " << target << std::endl; // este solo ataca porque lo he implementado dentro de Warrior2, porque como es una pure method de su classe madre, ACharacter, no se puede instanciar.
}

// **Comportamiento base opcional: Puedes escribir el bloque de código que has puesto. La clase hija seguirá estando obligada a sobrescribir el método attack, pero dentro de su propia implementación podrá llamar a la versión original haciendo explícitamente ACharacter::attack(target);. Esto sirve para no repetir código común.//