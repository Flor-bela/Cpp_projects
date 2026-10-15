#include <iostream>
#include "Sample_const.hpp"

SampleConst::SampleConst(float const p1) : pi(p1), qb(42) // this way all objects created from this class will have the integer initialized as 42
{
	std::cout << "Constructor called!" << std::endl;

	//std::cout << "pi is " << pi << std::endl;
	//std::cout << "qb is " << qb << std::endl;
}

SampleConst::~SampleConst(void)
{
	std::cout << "Destructor called!" << std::endl;
}

// Buena practica: como tenemos variables const, es mejor proteger las funciones también diciendo que son const para no intentar cambiar algo que no se puede y tener un error de compilación sin saber porqué!
void	SampleConst::bar(void) const
{
	std::cout << "Member function called!" << std::endl;

	std::cout << "pi is " << pi << std::endl;
	std::cout << "qb is " << qb << std::endl;

	return ;

}

// Mala practica: aunque funciona porque esta funcion no está como const, podemos estar intentando cambiar variables que no se pueden cambiar porque son const y perder mucho tiempo a debuggear....
/* void	SampleConst::bar(void) //aunque quitara el const de bar, el standard output no funcionaría!
{
	std::cout << "Member function called!" << std::endl;

	std::cout << "qb is " << qb << std::endl;

	// Ejemplos de lo que no se puede hacer:
	//this->pi = 3.16; // no puedo hacerlo porque la funcion es const!!!
	this->qb = 4; // no puedo hacerlo porque la funcion es const aunque int qb no es const!!!
	
	std::cout << "this->qb is " << this->qb << std::endl;

	std::cout << "qb now is " << qb << std::endl;

	// Es buena prácticar proteger las funciones cuando tenemos variables/atributos en la class que son const para no intentar cambiar valores que en realidad no sería posible cambiarlos, ya que el compiler daría error!

	return ;
} */