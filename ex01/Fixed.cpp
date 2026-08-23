/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:35:25 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/23 13:07:52 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int	Fixed::_f_bits = 8; // non-member const int // fractional bits (only the decimal ones no???)

Fixed::Fixed( void ) : _fp(0) // default constructor
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
	//_fp = num * 256; // lo mismo que abajo en el caso de que los bits de la parte fractionaria sean 8!
	_fp = num * (1 << _f_bits);		// to convert an integer into a fixed-point we need to multiply the integer by 256, or moving all the bits to the left 8 places.
	// creo que tengo que poner un limite en el caso de que le de el valor max de int! porque hará overflow no?


}


Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const & src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	this->_fp = src.getRawBits();
	
	return *this;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fp;
}

void	Fixed::setRawBits( int const raw)
{
	_fp = raw;
	return ;
}

