/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 19:14:50 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/01 16:20:05 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
		Point( void );										// default constructor
		Point( float const x_coord, float const y_coord);	// "special" constructor
		Point( Point const & src );							// copy constructor
		~Point( void );										// destructor

		Point& operator=( Point const & src );				// a copy assignment operator overload
	
		Fixed	get_x( void ) const;
		Fixed	get_y( void ) const;

	private:
		Fixed const	x;
		Fixed const	y;

};

std::ostream& operator<<(std::ostream& out, const Point& src);

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif