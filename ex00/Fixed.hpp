/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:26:03 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/25 16:47:59 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:
		Fixed( void ); 				  // default constructor -> needs to initialized the fixed_point to value 0
		Fixed( Fixed const & a );// copy constructor
		~Fixed( void );				// destructor
		
		Fixed&	operator=(Fixed const & src);	// copy assignment operator overload
		
		int		getRawBits( void ) const;		// return the raw value of the fixed-point value
		void	setRawBits( int const raw );	// sets the raw value of the fixed-point number
		
	private:
		int					_fixed_point;		// initiated as a 0 in the default constructor
		static const int	_fractional_bits;	// will always be 8 -> since it is a non-member function, need to initiate this variable before the constructor?? (something like this)

};

#endif