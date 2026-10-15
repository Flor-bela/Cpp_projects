#include "ACharacter.hpp"
#include "Warrior2.hpp"
#include <iostream>

int		main(void)
{
	//ACharacter*	b = new ACharacter(); // an object of abstract class is not allowed!!!

	ACharacter*	a = new Warrior2();
	a->attack("Robot");				// esta es de Warrior2 -> está definida en Warrior2 porque la de ACharacter es abstract
	a->sayHello("Students");		// esta es de ACharacter

	return 0;
}