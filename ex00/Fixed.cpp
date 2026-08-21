/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <fda-roch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:35:25 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/21 18:09:17 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>

const int	Fixed::_f_bits = 8; // non-member const int

Fixed::Fixed( void ) : _fp(0) // default constructor
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) // como es un constructor no tengo que hacer return....
{
	std::cout << "Copy constructor called" << std::endl;
	// copiar el valor de src para el que estoy creando...
	// es solo así???
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & src) // no estoy segura de esto
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	Fixed	new_obj; // creamos otro objecto
	new_obj._fp = src._fp;

	return new_obj; // es para devolver una referencia...
}

int		Fixed::getRawBits( void ) const // what exactly is the raw bits??? the integer value??
{
	return this->_fp;  // should I just return _fp ?? (or this->_fp ??) is there a difference?
}

void	Fixed::setRawBits( int const raw)
{
	_fp = raw; // just this???
	return ;
}

