/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 19:40:11 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/28 17:36:42 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int		main( void )
{
	Point a(4, 4);
	Point b(2, 1);
	Point c(6, -1);
	Point point(2.5f, 1.5f);

	std::cout << "a" << a << std::endl; // el problema es que estoy usando floats...no estoy usando fixed_point...o mi class Fixed bien...
	std::cout << "b" << b << std::endl;
	std::cout << "c" << c << std::endl;
	std::cout << "point" << point << std::endl;
	
	bool	result = bsp( a, b, c, point);
	if (result == 1)
		std::cout << "The point is\033[32m inside \033[0mthe triangle " << std::endl;
	else
		std::cout << "The point is\033[31m outside \033[0mthe triangle " << std::endl;
	
	return 0;
}
