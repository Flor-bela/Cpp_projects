/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:35:25 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/01 17:02:50 by fda-roch         ###   ########.fr       */
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

Fixed::Fixed( Fixed const & src ) : _rawBits(src.getRawBits())// copy constructor // aquí voy a usar esta version -> mejor listas de inicializacion
{
	//std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed( int const num )
{
	//std::cout << "Int constructor called" << std::endl;
	_rawBits = num * (1 << _fractional_bits); // to convert an integer into a fixed-point we need to multiply the integer by 256, or moving all the bits to the left 8 places.
	//_fp = num * 256; // lo mismo que abajo en el caso de que los bits de la parte fractionaria sean 8!
	// creo que tengo que poner un limite en el caso de que le de el valor max de int! porque hará overflow no?
	//_rawBits = num * (2^_fractional_bits); // it would be the same, only that I don´t know if this works...
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
	Fixed	result; // guardar esto en el nuevo objeto que voy a hacer return
	result.setRawBits(this->getRawBits() + src.getRawBits());
	return result;
		// antes estaba asignando con return Fixed(this->getRawBits() + src.getRawBits()) es un error, porque estoy dando un int a Fixed, entonces este lo va a tomar como int y va a hacer una conversion de nuevo, multiplicando por 256 para pasar de int a rawBits del fixed point....
}

Fixed	Fixed::operator-( Fixed const & src ) const
{
	Fixed	result;
	result.setRawBits(this->getRawBits() - src.getRawBits());
	return result;
}

Fixed	Fixed::operator*( Fixed const & src ) const
{
	return Fixed(this->toFloat() * src.toFloat()); // perdemos un poco de precision al ser float, pero creo que es aceptable...
}

Fixed	Fixed::operator/( Fixed const & src ) const
{
	return Fixed( this->toFloat() / src.toFloat() );
}

// (pre and post)increment and (pre and post)decrement operators
// Prefijo (++a, --a): El operador se coloca antes. Primero modifica la variable y luego devuelve el valor ya actualizado.
// Sufijo o Postfijo (a++, a--): El operador se coloca después. Primero devuelve el valor original (haciendo una copia temporal) y luego modifica la variable.
// pre-increment (primero incrementamos y después usamos):
Fixed &	Fixed::operator++( void ) //++a
{
	this->_rawBits++; // + 1 al rawBit que es el valor representable + pequeño (el epsilon) (00000001) (o sea + 1 al valor menos significativo, al primero a la derecha)
	return *this;
}

Fixed &	Fixed::operator--( void ) //--a
{
	this->_rawBits--; // complemento de dos; restamos 1 o sea -> 00000001 -> invierto los bits -> 11111110 -> le sumo 1 -> 11111110 + 00000001 = 11111111 (esto es -1 para el ordenador) -> y ahora sumamos el _rawBits a este -1 (11111111)
	return *this;
}

// post-increment (usamos primero y después incrementamos):
Fixed	Fixed::operator++( int ) //a++
{
	Fixed	temp(*this); // copy constructor
	
	this->_rawBits++;
	return temp;
}

Fixed	Fixed::operator--( int ) //a--
{
	Fixed	temp(*this); // copy constructor

	this->_rawBits--;
	return temp;
}

Fixed &	Fixed::min(Fixed & a, Fixed & b) // son static pero en el .hpp no lo tengo que añadir
{
	if (a <= b) // así ya podemos usar los operadores < > o = aquí y dentro usan los rawbits
		return (a);
	return (b);
}

Fixed &	Fixed::max(Fixed & a, Fixed & b)
{
	if (a >= b)
		return (a);
	return (b);
}

Fixed const &	Fixed::min( Fixed const & a, Fixed const & b) // ?? como paso const, debo pasar referencia para de verdad garantizar que no se cambian dentro
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
	// hace cast antes de hacer la division
	return (float)_rawBits / (float)(1 << _fractional_bits); // dividir en vez de multiplicar
}

int		Fixed::toInt( void ) const
{
	//return _rawBits >> _fractional_bits;			// lo mismo -- no no, no es lo mismo!!! ver el caso de pasar float -1.0039 por ejemplo y después converterlo a int con estos dos métodos. El de la división nos da -1, el del desplazamiento directamente nos da -2!. Recordar que en programación para obtener un int, devemos "quitar la parte decimal", así que la división es más correcta!!!
	return _rawBits / (1 << _fractional_bits);		// hacer division (dividir por 256 (2^fractional_bits)) para volver a ser int
}

std::ostream & operator<<( std::ostream & out, Fixed const & src)
{
	out << src.toFloat();
	return out;
}
