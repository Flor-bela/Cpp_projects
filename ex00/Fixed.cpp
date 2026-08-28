/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:35:25 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/28 18:23:51 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>

const int	Fixed::_fractional_bits = 8; // non-member const int

Fixed::Fixed( void ) : _rawBits(0) // default constructor
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) // como es un constructor no tengo que hacer return.
{
	std::cout << "Copy constructor called" << std::endl; // copiar el valor de src para el que estoy creando
	// puedo elegir tener un o otro:
	//this->_fp = src.getRawBits();
	this->operator=(src); // con esto aquí tengo lo que aparece en el subject (el comentario que dice que esta row may be missing)
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	this->_rawBits = src.getRawBits();
	// tenía solo this->_rawBits = src._rawBits; pero en el subject aquí escribe el output de getRawBits member function called!
	return *this;// 'this' es el pointer al objecto que está llamando el operador= y como es pointer y tengo que devolver &, para hacerlo tengo de hacer dereferencing(con el *) el pointer y devolver el valor "real", por eso es return *this...(lo unico nuevo)
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _rawBits;
}

void	Fixed::setRawBits( int const raw)
{
	_rawBits = raw;
	return ;
}

