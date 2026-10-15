/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <fda-roch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:26:03 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/02 13:07:39 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed( void );
		Fixed( Fixed const & a );
		Fixed( int const num );
		Fixed( float const num );
		~Fixed( void );
		
		Fixed &	operator=(Fixed const & src);
		
		bool	operator>(Fixed const & src) const;
		bool	operator<(Fixed const & src) const;
		bool	operator>=(Fixed const & src) const;
		bool	operator<=(Fixed const & src) const;
		bool	operator==(Fixed const & src) const;
		bool	operator!=(Fixed const & src) const;

		Fixed	operator+(Fixed const & src) const;
		Fixed	operator-(Fixed const & src) const;
		Fixed	operator*(Fixed const & src) const;
		Fixed	operator/(Fixed const & src) const;

		Fixed &	operator++( void );
		Fixed &	operator--( void );
		Fixed	operator++( int );
		Fixed	operator--( int );

		static Fixed &	min(Fixed & a, Fixed & b);
		static Fixed &	max(Fixed & a, Fixed & b);
		static Fixed const &	min(Fixed const & a, Fixed const & b);
		static Fixed const &	max(Fixed const & a, Fixed const & b);
	
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		
	private:
		int					_rawBits;
		static const int	_fractional_bits;

};

std::ostream & operator<<( std::ostream & out, Fixed const & src);

#endif