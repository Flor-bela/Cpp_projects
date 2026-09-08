#include "ACharacter.hpp"
#include "Warrior2.hpp"
#include <iostream>

int		main(void)
{
	//ACharacter*	b = new ACharacter(); // object of abstract class is not allowed!!!
	ACharacter*	a = new Warrior2();
	a->attack("Robot");

	return 0;
}