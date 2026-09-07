#include "Character.hpp"
#include "Warrior.hpp"
#include <iostream>

int		main( void )
{
	Warrior*	a = new Warrior(); // me estaba dando error porque no había puesto public en la classe de Warrior, y si no se pone nada, por defecto son privados todos los miembros de una class.
	Character*	b = new Warrior();

	a->sayHello();
	b->sayHello(); // como tengo virtual sayHello -> va a ejecutar la función de Warrior y no de Character. Si no pongo virtual, ejecuta la de Character
	
	delete a;// no voy a hacerlo por ahora porque el video no lo dijo, pero el destructor de Character tiene que ser también virtual, para que ejecute primero el destructor del Warrior y solo después el de Character.
	delete b;

	// nota: tengo memory leaks aún! -> necesito hacer lo de poner virtual en el destructor de Character!!!
	return 0;
}