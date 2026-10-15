/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <fda-roch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:35:25 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/02 13:02:23 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int	Fixed::_fractional_bits = 8;

Fixed::Fixed( void ) : _rawBits(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & src ) : _rawBits(src.getRawBits())
{
	//std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed( int const num )
{

	_rawBits = num * (1 << _fractional_bits);
}

Fixed::Fixed( float const num )
{
	//std::cout << "Float constructor called" << std::endl;
	_rawBits = roundf(num * (1 << _fractional_bits));
}

Fixed::~Fixed( void )
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=( Fixed const & src )
{
	//std::cout << "Copy assignment operator called" << std::endl;
	this->_rawBits = src.getRawBits();
	return *this;
}

bool	Fixed::operator>( Fixed const & src ) const
{
	if (this->getRawBits() > src.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<( Fixed const & src ) const
{
	if (this->getRawBits() < src.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>=( Fixed const & src ) const
{
	if (this->getRawBits() >= src.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<=( Fixed const & src ) const
{
	if (this->getRawBits() <= src.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator==( Fixed const & src ) const
{
	if (this->getRawBits() == src.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator!=( Fixed const & src ) const
{
	if (this->getRawBits() != src.getRawBits())
		return true;
	return false;
}

Fixed	Fixed::operator+( Fixed const & src ) const
{
	Fixed	result;
	result.setRawBits(this->getRawBits() + src.getRawBits());
	return result;
}

Fixed	Fixed::operator-( Fixed const & src ) const
{
	Fixed	result;
	result.setRawBits(this->getRawBits() - src.getRawBits());
	return result;
}

Fixed	Fixed::operator*( Fixed const & src ) const
{
	return Fixed(this->toFloat() * src.toFloat());
}

Fixed	Fixed::operator/( Fixed const & src ) const
{
	return Fixed( this->toFloat() / src.toFloat() );
}

Fixed &	Fixed::operator++( void ) //++a
{
	this->_rawBits++;
	return *this;
}

Fixed &	Fixed::operator--( void ) //--a
{
	this->_rawBits--;
	return *this;
}

Fixed	Fixed::operator++( int ) //a++
{
	Fixed	temp(*this);
	this->_rawBits++;
	return temp;
}

Fixed	Fixed::operator--( int ) //a--
{
	Fixed	temp(*this);

	this->_rawBits--;
	return temp;
}

Fixed &	Fixed::min(Fixed & a, Fixed & b)
{
	if (a <= b)
		return (a);
	return (b);
}

Fixed &	Fixed::max(Fixed & a, Fixed & b)
{
	if (a >= b)
		return (a);
	return (b);
}

Fixed const &	Fixed::min( Fixed const & a, Fixed const & b)
{
	if (a <= b)
		return (a);
	return (b);
}

Fixed const &	Fixed::max( Fixed const & a, Fixed const & b)
{
	if (a >= b)
		return (a);
	return (b);
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
	return (float)_rawBits / (float)(1 << _fractional_bits);
}

int		Fixed::toInt( void ) const
{
	return _rawBits / (1 << _fractional_bits);
}

std::ostream & operator<<( std::ostream & out, Fixed const & src)
{
	out << src.toFloat();
	return out;
}
