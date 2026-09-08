/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <fda-roch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 20:36:35 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/08 13:55:18 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int		main( void )
{
	DiamondTrap	last;
	last.whoAmI();

	last.attack("Gadget");
	last.ClapTrap::attack("Robot");
	last.guardGate();
	last.highFivesGuys();

	return 0;
}