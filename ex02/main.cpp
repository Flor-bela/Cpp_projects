/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 16:56:50 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/26 22:55:30 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <limits.h>

int		main( void )
{
	/* Fixed	a(5);
	Fixed	b(5.5f);
	Fixed	c(10);
	Fixed	d;
	Fixed	e(c);
	
	bool	result;
	result = a > b;
	std::cout << result << std::endl;

	std::cout << "c is " << c.getRawBits() << std::endl;
	std::cout << "c integer is " << c.toInt() << std::endl;
	std::cout << "c now is " << c.getRawBits() << std::endl;
	std::cout << "c integer now is " << c.toInt() << std::endl;
	
	std::cout << Fixed::max(b, a) << std::endl; // con el operator << podemos devolver el valor, ya que en realidad max o min devuelve una referencia del objeto entero, no devuelve el valor concreto!
	std::cout << Fixed::min(c, e) << std::endl; */

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) ); // siendo multiplicacion, pasamos todo a float y solo después hacemos multiplicacion
	Fixed	c(2);

	std::cout << a << std::endl; // 0
	std::cout << ++a << std::endl; // aquí sumamos 1 (calcular a mano y ver que sale eso!!!) a a y después imprimimos su valor en Float
	std::cout << a << std::endl;  //aquí tiene que dar el mismo valor que el anterior
	std::cout << a++ << std::endl; // aquí de nuevo el mismo valor que el anterior y se suma por 1 (hacer calculo de nuevo aqui tambien a mano)
	std::cout << a << std::endl; // y aquí ya un valor nuevo de la suma que se hizo en el paso anterior
	
	std::cout << b << std::endl; // hacer calculo a mano aquí tambien!!!!
	
	std::cout << Fixed::max( a, b ) << std::endl; // aquí el b es el que tiene más valor y con el operator << conseguimos imprimirlo
	// ejemplo de error: Fixed::max(a, b) = Fixed(5); // esto no puedo hacerlo porque b es const! No puedo cambiarlo!
	Fixed::max(a, c) = Fixed(5); // aquí sí puedo porque ni a ni c son const, por eso puedo asignar un valor al que sea el max al final de hacer esa comparación
	
	Fixed error(c / 0);
	std::cout << error << std::endl; // da un valor muy pequeño, pero no da crash....así que ni tan mal...

	return 0;
}