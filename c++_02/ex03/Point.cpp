/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <fda-roch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 19:16:21 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/02 13:07:59 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

Point::Point( void ) : x(0), y(0)
{
}

Point::Point( float const x_coord, float const y_coord ) : x(x_coord), y(y_coord)
{
}

Point::Point( Point const & src ) : x(src.x), y(src.y)
{ 
}


Point&	Point::operator=( Point const & src )
{
	(void) src;
	return *this;
}

Point::~Point( void )
{
}

Fixed	Point::get_x( void ) const
{
	return x;
}

Fixed	Point::get_y( void ) const
{
	return y;
}

std::ostream& operator<<(std::ostream& out, const Point& src)
{
	out << "(" << src.get_x() << ", " << src.get_y() << ")";
	return out;
}