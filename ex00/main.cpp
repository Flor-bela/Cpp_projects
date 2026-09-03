/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 11:32:59 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/03 13:07:22 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int		main( void )
{
	ClapTrap first("Robot");	// starts with 10 EnergyPoints
	first.attack("Alexa");		// -1 EnergyPoints
	first.takeDamage(5);
	first.beRepaired(5);		// -1 EnergyPoints

	ClapTrap second;
	second = first;				// will also be called Robot
	for (int i = 0; i < 7; i++)
	{
		second.attack("Siri");	// attack damage is 0 so cannot really do any damamge but loses EnergyPoints
	}
	second.beRepaired(1);		// the last EnergyPoint used here
	second.takeDamage(50);
	second.beRepaired(60);		// cannot do this..no energy left
	
	return 0;
}