/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 20:36:35 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/06 21:37:46 by fda-roch         ###   ########.fr       */
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
	
	last.get_EnergyPoints();
	last.attack("hola"); // attack es de ClapTrap y de ScavTrap, pero como este lo pongo después, se queda con el de ScavTrap!!!
	

	return 0;
}