/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <fda-roch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:35:25 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/02 12:57:47 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int	Fixed::_fractional_bits = 8;

Fixed::Fixed( void ) : _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(src);
}

Fixed::Fixed( int const num )
{
	std::cout << "Int constructor called" << std::endl;

	_rawBits = num * (1 << _fractional_bits);
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
	return this->_rawBits;
}

void	Fixed::setRawBits( int const raw )
{
	_rawBits = raw;
	return ;
}

float	Fixed::toFloat( void ) const
{
	return (float)_rawBits / (float)(1 << _fractional_bits);
}

int		Fixed::toInt( void ) const
{
	return _rawBits / (1 << _fractional_bits);
}

std::ostream & operator<<( std::ostream & out, Fixed const & src )
{
	out << src.toFloat();
	return out;
}
