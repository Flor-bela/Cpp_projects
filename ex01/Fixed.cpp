/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:35:25 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/28 20:29:54 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int	Fixed::_fractional_bits = 8;

Fixed::Fixed( void ) : _rawBits(0) // default constructor
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

	_rawBits = num * (1 << _fractional_bits); // to convert an integer into a fixed-point we need to multiply the integer by 256, or moving all the bits to the left 8 places.
	//_rawBits = num << _fractional_bits; // pero esto en versiones más anteriores para numeros negativos podría tener un comportamiento indefinido!
	//_rawBits = num * 256; // lo mismo que abajo en el caso de que los bits de la parte fractionaria sean 8!
	// creo que tengo que poner un limite en el caso de que le de el valor max de int! porque hará overflow no? No lo piden, pero bueno está bien entender el porqué
}

Fixed::Fixed( float const num )
{
	std::cout << "Float constructor called" << std::endl;

	_rawBits = roundf(num * (1 << _fractional_bits));
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=( Fixed const & src )
{
	std::cout << "Copy assignment operator called" << std::endl;

	this->_rawBits = src.getRawBits();
	return *this;
}

int		Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

void	Fixed::setRawBits( int const raw )
{
	_rawBits = raw;
	return ;
}

float	Fixed::toFloat( void ) const
{
	// hace cast antes de hacer la division sino perdemos todos los decimales
	return (float)_rawBits / (float)(1 << _fractional_bits); // dividir en vez de multiplicar
}

int		Fixed::toInt( void ) const
{
	//return _rawBits >> _fractional_bits;			// lo mismo -- no no, no es lo mismo!!! ver el caso de pasar float -1.0039 por ejemplo y después converterlo a int con estos dos métodos. El de la división nos da -1, el del desplazamiento directamente nos da -2!. Recordar que en programación para obtener un int, devemos "quitar la parte decimal", así que la división es más correcta!!!
	return _rawBits / (1 << _fractional_bits);		// hacer division (dividir por 256 (2^fractional_bits)) para volver a ser int -> es la manera más correcta!!!
}

std::ostream & operator<<( std::ostream & out, Fixed const & src )
{
	out << src.toFloat();
	return out;
}
