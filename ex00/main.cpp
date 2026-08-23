/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 18:05:25 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/22 18:10:09 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int		main ( void )
{
	Fixed	a;		// using the default constructor;
	//a.setRawBits(6); // si cambio aquí al valor de fixed-point, todos los demás también van a tener a 6!!!
	Fixed	b( a ); // using the copy constructor
	Fixed	c;

	c = b; // using a copy assignment operator overload

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;

	// Este es mi output -> solamente no tengo aquella linea que dice que puede "may be missing" -> pero ver porqué en el caso ese lo tienen...han puesto el operator= dentro de la copy constructor.....creo que es eso!!!!
/* 	Default constructor called
	Copy constructor called
	getRawBits member function called
	Default constructor called
	Copy assignment operator called
	getRawBits member function called
	getRawBits member function called
	0
	getRawBits member function called
	0
	getRawBits member function called
	0
	Destructor called
	Destructor called
	Destructor called
 */
}