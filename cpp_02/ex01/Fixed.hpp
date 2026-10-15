/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <fda-roch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:26:03 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/02 12:58:33 by fda-roch         ###   ########.fr       */
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
		
		Fixed&	operator=(Fixed const & src);
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		
	private:
		int					_rawBits;
		static const int	_fractional_bits;

};

std::ostream& operator<<( std::ostream& out, const Fixed& src);

#endif