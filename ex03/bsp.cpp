/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 19:31:13 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/01 17:07:04 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	AB_P; // A -> B;
	Fixed	BC_P; // B -> C;
	Fixed	CA_P; // C -> A;

	AB_P = (b.get_x() - a.get_x()) * (point.get_y() - a.get_y()) - (b.get_y() - a.get_y()) * (point.get_x() - a.get_x());
	BC_P = (c.get_x() - b.get_x()) * (point.get_y() - b.get_y()) - (c.get_y() - b.get_y()) * (point.get_x() - b.get_x());
	CA_P = (a.get_x() - c.get_x()) * (point.get_y() - c.get_y()) - (a.get_y() - c.get_y()) * (point.get_x() - c.get_x());

	if ((AB_P > 0 && BC_P > 0 && CA_P > 0) || (AB_P < 0 && BC_P < 0 && CA_P < 0))
		return true;
	return false;
}