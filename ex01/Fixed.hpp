/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:26:03 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/25 16:09:49 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed( void ); 							// default constructor -> needs to initialized the fixed_point to value 0
		Fixed( Fixed const & a );				// copy constructor
		Fixed( int const num );					// constructor with int const
		Fixed( float const num );				// constructor with float const
		~Fixed( void );							// destructor
		
		Fixed&	operator=(Fixed const & src);	// copy assignment operator overload
		
		int		getRawBits( void ) const;		// return the raw value of the fixed-point value
		void	setRawBits( int const raw );	// sets the raw value of the fixed-point number
		float	toFloat( void ) const;			// converts the fixed-point value to a floating-point value
		int		toInt( void ) const;			// converts the fixed-point value to a floating-point value
		
	private:
		int					_fixed_point;								// initiated as a 0 in the default constructor
		static const int	_fractional_bits;			// will always be 8 -> since it is a non-member function, need to initiate this variable before the constructor?? (something like this)

};

std::ostream& operator<<( std::ostream& out, const Fixed& src); // add (insertion)<< operator that inserts a floating-point representation of the fixed-point number into the output stream object passed as a parameter

#endif