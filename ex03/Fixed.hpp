/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:26:03 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/28 21:05:42 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed( void ); 							// default constructor -> needs to initialized the rawBits to value 0
		Fixed( Fixed const & a );				// copy constructor
		Fixed( int const num );					// constructor with int const
		Fixed( float const num );				// constructor with float const
		~Fixed( void );							// destructor
		
		Fixed &	operator=(Fixed const & src);	// copy assignment operator overload
		
		// Comparison operators:
		bool	operator>(Fixed const & src) const;
		bool	operator<(Fixed const & src) const;
		bool	operator>=(Fixed const & src) const;
		bool	operator<=(Fixed const & src) const;
		bool	operator==(Fixed const & src) const;
		bool	operator!=(Fixed const & src) const;

		// Arithmetic operators:
		Fixed	operator+(Fixed const & src) const;
		Fixed	operator-(Fixed const & src) const;
		Fixed	operator*(Fixed const & src) const;
		Fixed	operator/(Fixed const & src) const;

		Fixed &	operator++( void );		//++a // pre-increment
		Fixed &	operator--( void );		//--a // pre-decrement
		Fixed	operator++( int );		//a++ // post-increment
		Fixed	operator--( int );		//a-- // post-decrement

		static Fixed &	min(Fixed & a, Fixed & b);
		static Fixed &	max(Fixed & a, Fixed & b);
		static Fixed const &	min(Fixed const & a, Fixed const & b);
		static Fixed const &	max(Fixed const & a, Fixed const & b);
	
		int		getRawBits( void ) const;		// return the raw value of the fixed-point value
		void	setRawBits( int const raw );	// sets the raw value of the fixed-point number
		float	toFloat( void ) const;			// converts the fixed-point value to a floating-point value
		int		toInt( void ) const;			// converts the fixed-point value to a floating-point value
		
	private:
		int					_rawBits;								// initiated as a 0 in the default constructor
		static const int	_fractional_bits;			// will always be 8 -> since it is a non-member function, need to initiate this variable before the constructor?? (something like this)

};

std::ostream & operator<<( std::ostream & out, Fixed const & src); // add (insertion)<< operator that inserts a floating-point representation of the fixed-point number into the output stream object passed as a parameter

#endif