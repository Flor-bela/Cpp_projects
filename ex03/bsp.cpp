/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 19:31:13 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/28 15:52:13 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	AB_P; // A -> B;   // antes tenía float aquí, pero claro, ahora siendo todos Fixed, puedo usar las operaciones que están ya definidas dentro de Fixed, - y *
	Fixed	BC_P; // B -> C;
	Fixed	CA_P; // C -> A;

	// Producto cruzado:
	AB_P = (b.get_x() - a.get_x()) * (point.get_y() - a.get_y()) - (b.get_y() - a.get_y()) * (point.get_x() - a.get_x());
	BC_P = (c.get_x() - b.get_x()) * (point.get_y() - b.get_y()) - (c.get_y() - b.get_y()) * (point.get_x() - b.get_x());
	CA_P = (a.get_x() - c.get_x()) * (point.get_y() - c.get_y()) - (a.get_y() - c.get_y()) * (point.get_x() - c.get_x());
	
	//std::cout << AB_P.getRawBits() << std::endl;
	//std::cout << BC_P.getRawBits() << std::endl;
	//std::cout << CA_P.getRawBits() << std::endl;

	// no podía hacer simplemente if (AB_P && BC_P && CA_P > 0) porque && no está definido como operador -> tnego que ver mejor esto de los operadores y lo de la "cadena" de a = c = d = e... porque si quisiera definir && como operador, necesitaría que esa cadena funcionara...
	if (AB_P > 0 && BC_P > 0 && CA_P > 0) // el punto está a la "izquierda" porque voy sentido antihorario, así que es que está dentro
		return true;
	else
		return false;
	// returns True if the point is inside the triangle. False otherwise (if the point is on the vertex or on an edge, it returns False)
}