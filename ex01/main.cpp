/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:47:36 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/03 18:19:29 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int		main( void )
{
	ScavTrap	third;
	third.attack("Alexa");	// is already making damage -> 20!!! In ClapTrap it didn´t do it.
	third.takeDamage(50);	// from ClapTrap!
	third.takeDamage(50);	// from ClapTrap!
	third.beRepaired(5);	// from ClapTrap!
	third.guardGate();

	return 0;
}
