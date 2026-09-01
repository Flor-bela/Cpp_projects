/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 16:56:50 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/01 11:30:43 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int		main( void )
{
	Fixed		a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) ); // siendo multiplicacion, pasamos todo a float y solo después hacemos multiplicacion

	std::cout << a << std::endl; // 0
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;  //aquí tiene que dar el mismo valor que el anterior
	std::cout << a++ << std::endl; // aquí de nuevo el mismo valor que el anterior y se suma por 1 (hacer calculo de nuevo aqui tambien a mano)
	std::cout << a << std::endl; // y aquí ya un valor nuevo de la suma que se hizo en el paso anterior
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl; // aquí el b es el que tiene más valor y con el operator << conseguimos imprimirlo

	return 0;
}