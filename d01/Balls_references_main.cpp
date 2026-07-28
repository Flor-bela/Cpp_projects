#include "Balls_references.hpp"
#include <iostream>
#include <string>

int		main( void )
{
	Balls	balls;
	int		*nb_ptr = &balls.number;
	int		&nb_ref = balls.number; // funciona como un alias de balls.number
	//int		&nb_ref2; // compiler error! Needs to be initialised on the same row!!!
	//	nb_ref2 = balls.number;
	
	std::cout << "nb_ptr is " << nb_ptr << std::endl; // nb_ptr is 0x7ffe10e9f350
	std::cout << "nb_ptr is " << *nb_ptr << std::endl; // nb_ptr is 0
	std::cout << "nb_ref is " << nb_ref << std::endl; // nb_ref is 0

	////////////////////////////////////////////////////////////////////////////
	/* Actualizar los valores de las variables con pointer y con referencias */
	*nb_ptr = 42;
	std::cout << "nb_ptr now is " << *nb_ptr << std::endl; // nb_ptr is 42
	std::cout << "nb_ref now is " << nb_ref << std::endl; // nb_ref is 42 too
	//nb_ptr = 42; // error
	nb_ref = 24; // o sea que también puedo actualizar el valor con una referencia!!!
	std::cout << "nb_ptr finally is " << *nb_ptr << std::endl; // nb_ptr is 24
	std::cout << "nb_ref finally is " << nb_ref << std::endl; // nb_ref is 24

	///////////////////////////////////////////////////////////////////////////////
	/* Strings */

	std::string	*str_ptr = &balls.colour;
	std::string	&str_ref = balls.colour;

	std::cout << "str_ptr is " << *str_ptr << std::endl; // str_ptr is Green
	std::cout << "str_ref is " << str_ref << std::endl; // str_ref is Green

	////////////////////////////////////////////////////////////////////////////
	/* Actualizar los valores de las variables con pointer y con referencias */

	*str_ptr = "Red";
	std::cout << "str_ptr now is " << *str_ptr << std::endl; // str_ptr is Red
	std::cout << "str_ref now is " << str_ref << std::endl; // str_ref is Red too

	str_ref = "Yellow";
	std::cout << "str_ptr finally is " << *str_ptr << std::endl; // str_ptr is Yellow
	std::cout << "str_ref finally is " << str_ref << std::endl; // str_ref is Yellow too

	return 0;
}