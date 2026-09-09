#ifndef ICOFFEEMAKER_HPP
# define ICOFFEEMAKER_HPP

#include <string>

class ICoffeeMaker		// Interface! -> no podemos crear un objeto de esta clase porque es una Interface! ( pero podemos crear un puntero a una clase derivada de esta)
{
	public:
		virtual void			fillWaterTank( IWaterSource * src ) = 0;
		virtual ICoffeeMaker	make( std::string & type ) = 0;
		virtual ~ICoffeeMaker;

};

// en main.cpp:
//ICoffeeMaker*   coffee = new Brand(); // podríamos hacer esto y para ello necesitamos el destructor virtual para poder después hacer delete coffee; y no tener leaks de memoria!
// Al ser virtual el destructor, cuando hacemos delete coffee; C++ busca el tipo real del objeto en memoria (Brand)!!! por eso es muy importante poner virtual en el destructor de ICoffeeMaker!


#endif