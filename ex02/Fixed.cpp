/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:35:25 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/26 22:08:43 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int	Fixed::_fractional_bits = 8; // non-member const int // fractional bits (only the decimal ones no???)

Fixed::Fixed( void ) : _fixed_point(0) // default constructor
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & src ) // copy constructor
{
	//std::cout << "Copy constructor called" << std::endl;
	this->operator=(src);
}

Fixed::Fixed( int const num ) // ex01
{
	//std::cout << "Int constructor called" << std::endl;
	_fixed_point = num * (1 << _fractional_bits); // to convert an integer into a fixed-point we need to multiply the integer by 256, or moving all the bits to the left 8 places.
	//_fp = num * 256; // lo mismo que abajo en el caso de que los bits de la parte fractionaria sean 8!
	// creo que tengo que poner un limite en el caso de que le de el valor max de int! porque hará overflow no?
	//_fixed_point = num * (2^_fractional_bits); // it would be the same, only that I don´t know if this works...
}

Fixed::Fixed( float const num ) 
{
	//std::cout << "Float constructor called" << std::endl;
	_fixed_point = roundf(num * (1 << _fractional_bits));
}

Fixed::~Fixed( void )
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const & src)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed_point = src.getRawBits();
	return *this;
}

bool	Fixed::operator>(Fixed const & src) const
{
	if (this->getRawBits() > src.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<(Fixed const & src) const
{
	if (this->getRawBits() < src.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>=(Fixed const & src) const
{
	if (this->getRawBits() >= src.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<=(Fixed const & src) const
{
	if (this->getRawBits() <= src.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator==(Fixed const & src) const
{
	if (this->getRawBits() == src.getRawBits())
		return true;
	return false;
}

bool Fixed::operator!=(Fixed const & src) const
{
	if (this->getRawBits() != src.getRawBits())
		return true;
	return false;
}

// probar estos operators!!! -> probar con valores negativos
Fixed	Fixed::operator+(Fixed const & src) const
{
	// guardar esto en el nuevo objeto que voy a hacer return
	return Fixed(this->toFloat() + src.toFloat());
}

Fixed	Fixed::operator-(Fixed const & src) const
{
	return Fixed(this->toFloat() - src.toFloat());
}

Fixed	Fixed::operator*(Fixed const & src) const
{
	return Fixed(this->toFloat() * src.toFloat());
}

Fixed	Fixed::operator/(Fixed const & src) const
{
	return Fixed(this->toFloat() / src.toFloat());

}

// (pre and post)increment and (pre and post)decrement operators
// Prefijo (++a, --a): El operador se coloca antes. Primero modifica la variable y luego devuelve el valor ya actualizado.
// Sufijo o Postfijo (a++, a--): El operador se coloca después. Primero devuelve el valor original (haciendo una copia temporal) y luego modifica la variable.
// pre-increment (primero incrementamos y después usamos):
Fixed&	Fixed::operator++( void ) //++a
{
	this->_fixed_point++; // + 1 (00000001) (o sea + 1 al valor menos significativo, al primero a la derecha)
	return *this;
}

Fixed&	Fixed::operator--( void ) //--a
{
	this->_fixed_point--; // complemento de dos; restamos 1 o sea -> 00000001 -> invierto los bits -> 11111110 -> le sumo 1 -> 11111110 + 00000001 = 11111111 (esto es -1 para el ordenador) -> y ahora sumamos el _fixed_point a este -1 (11111111)
	return *this;
}

// post-increment (usamos primero y después incrementamos):
Fixed	Fixed::operator++( int ) //a++
{
	Fixed	temp(*this); // copy constructor
	
	this->_fixed_point++;
	return temp;
}

Fixed	Fixed::operator--( int ) //a--
{
	Fixed	temp(*this); // copy constructor
	
	this->_fixed_point--;
	return temp;
}

Fixed&	Fixed::min(Fixed& a, Fixed& b) // son static pero en el .hpp no lo tengo que añadir
{
	if (a <= b) // así ya podemos usar los operadores < > o = aquí y dentro usan los rawbits
		return (a);
	return (b);
	// también podría hacer return (a <= b) ? a : b; // -> sería lo mismo y solo sería una línea de código
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b) // ?? como paso const, debo pasar referencia para de verdad garantizar que no se cambian dentro
{
	if (a <= b)
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a >= b)
		return (a);
	return (b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a >= b)
		return (a);
	return (b);
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
