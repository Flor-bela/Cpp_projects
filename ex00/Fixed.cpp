/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:35:25 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/25 16:48:29 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>

const int	Fixed::_fractional_bits = 8; // non-member const int

Fixed::Fixed( void ) : _fixed_point(0) // default constructor
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) // como es un constructor no tengo que hacer return....
{
	std::cout << "Copy constructor called" << std::endl;
	
	// copiar el valor de src para el que estoy creando...
	// es solo así??? No, dice el compilador que src es unused.....
	
	// puedo elegir tener una o otra:
	//this->_fp = src.getRawBits(); // ??? aqui el this (es el objecto de la class Fixed que estoy justo creando)
	this->operator=(src); // con esto aquí tengo lo que aparece en el subject (el comentario que dice que esta row may be missing)
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & src) // no estoy segura de esto
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	this->_fixed_point = src.getRawBits(); // ?? lo mismo que arriba no?
	// tenía solo this->_fp = src._fp; pero en el subject aquí escribe el output de getRawBits member function called

	return *this;// 'this' es el pointer al objecto que está llamando el operador= y como es pointer y tengo que devolver &, para hacerlo tengo de hacer dereferencing(con el *) el pointer y devolver el valor "real", por eso es return *this...(lo unico nuevo)
}

int		Fixed::getRawBits( void ) const // what exactly is the raw bits??? the integer value??
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_point;  // should I just return _fp ?? (or this->_fp ??) is there a difference?
}

void	Fixed::setRawBits( int const raw)
{
	_fixed_point = raw; // just this???
	return ;
}

