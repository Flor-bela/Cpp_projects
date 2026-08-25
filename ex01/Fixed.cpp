/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:35:25 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/25 16:15:58 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int	Fixed::_fractional_bits = 8; // non-member const int // fractional bits (only the decimal ones no???)

Fixed::Fixed( void ) : _fixed_point(0) // default constructor
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & src ) // copy constructor
{
	std::cout << "Copy constructor called" << std::endl;
	
	this->operator=(src);
}

Fixed::Fixed( int const num ) // ex01
{
	std::cout << "Int constructor called" << std::endl;
	
	_fixed_point = num * (1 << _fractional_bits); // to convert an integer into a fixed-point we need to multiply the integer by 256, or moving all the bits to the left 8 places.
	//_fp = num * 256; // lo mismo que abajo en el caso de que los bits de la parte fractionaria sean 8!
	// creo que tengo que poner un limite en el caso de que le de el valor max de int! porque hará overflow no?
	//_fixed_point = num * (2^_fractional_bits); // it would be the same, only that I don´t know if this works...
}

Fixed::Fixed( float const num ) 
{
	std::cout << "Float constructor called" << std::endl;
	
	_fixed_point = roundf(num * (1 << _fractional_bits));
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const & src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	this->_fixed_point = src.getRawBits();
	
	return *this;
}

int		Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_point;
}

void	Fixed::setRawBits( int const raw)
{
	_fixed_point = raw;
	return ;
}

// probar estos dos!!!
float	Fixed::toFloat( void ) const
{
	// hace cast antes de hacer la division
	return (float)_fixed_point / (float)(1 << _fractional_bits); // dividir en vez de multiplicar
}

int		Fixed::toInt( void ) const
{
	//return _fixed_point >> _fractional_bits;			// desplazar a la derecha en vez de a la izquierda
	return _fixed_point / (1 << _fractional_bits);		// hacer division (dividir por 256 (2^fractional_bits)) para volver a ser int
}

std::ostream& operator<<( std::ostream& out, const Fixed& src) // ver que esto funciona!!!!!
{
	out << src.toFloat();
	return out;
}
