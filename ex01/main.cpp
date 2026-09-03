/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:47:36 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/03 20:23:39 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int		main( void )
{
	ClapTrap first("Robot");	// starts with 10 EnergyPoints
	first.attack("Alexa");		// -1 EnergyPoints
	first.takeDamage(5);
	first.beRepaired(5);		// -1 EnergyPoints

	ScavTrap	second;
	second.attack("Alexa");	// is already making damage -> 20!!! In ClapTrap it didn´t do it.
	second.takeDamage(50);	// from ClapTrap!
	second.takeDamage(50);	// from ClapTrap!
	second.beRepaired(5);	// from ClapTrap!
	second.guardGate();

	return 0;
}
