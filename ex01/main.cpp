/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 18:08:40 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/28 20:51:30 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int		main ( void )
{
	Fixed		a;				// default constructor
	Fixed const	b( 10 );		// integer
	Fixed const c( 42.42f );	// float
	Fixed const d( b );			// copy constructor

	Fixed e(-1.0039f);
	std::cout << e.toInt() << std::endl;

	a = Fixed( 1234.4321f);		// float constructor & copy assignment operator called (este ultimo se llama dos veces)

	std::cout << "a is " << a << std::endl; // aqui los enseña todos como float!!!! (operator <<)
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return 0;
}