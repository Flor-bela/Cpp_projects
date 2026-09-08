/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <fda-roch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 11:32:59 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/08 13:59:46 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int		main( void )
{
	ClapTrap first("Robot");
	first.attack("Alexa");
	first.takeDamage(5);
	first.beRepaired(5);

	ClapTrap second;
	second = first;
	for (int i = 0; i < 7; i++)
	{
		second.attack("Siri");
	}
	second.beRepaired(1);
	second.beRepaired(60);
	second.takeDamage(50);
	
	return 0;
}