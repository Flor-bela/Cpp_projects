/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:47:36 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/03 18:15:45 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int		main( void )
{
	ScavTrap	first;
	first.attack("Alexa"); // is already making damage -> 20!!! In ClapTrap it didn´t do it.
	//first.get_EnergyPoints(); // gastamos 1 con el attack
	//first.get_HitPoints();
	first.takeDamage(50); // from ClapTrap!
	first.takeDamage(50); // from ClapTrap!
	//first.get_EnergyPoints();
	first.beRepaired(5); // 48 energy point despues de esto -> be repaired is directly from ClapTrap. entonces el objecto first ha sido actualizado???
	//first.get_EnergyPoints();
	//first.get_HitPoints();
	first.guardGate();

	
	return 0;
}

// Note that proper construction/destruction chaining must be shown in your tests.