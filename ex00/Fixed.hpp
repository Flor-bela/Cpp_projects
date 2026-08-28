/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:26:03 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/28 18:16:00 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:
		Fixed( void ); 				// default constructor -> rawBits to 0
		Fixed( Fixed const & a );	// copy constructor
		~Fixed( void );				// destructor
		
		Fixed&	operator=(Fixed const & src);	// copy assignment operator overload
		
		int		getRawBits( void ) const;		// return the raw value of the rawBits value
		void	setRawBits( int const raw );	// sets the raw value of the rawBits number
		
	private:
		int					_rawBits;		// initiated as a 0 in the default constructor
		static const int	_fractional_bits;	// will always be 8 -> since it is a non-member function, need to initiate this variable before the constructors

};

#endif