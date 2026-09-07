/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 20:36:35 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/07 16:35:24 by fda-roch         ###   ########.fr       */
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
	/* last.whoAmI();
	last.attack("Gadget"); // attack es de ClapTrap y de ScavTrap, pero como este lo pongo después, se queda con el de ScavTrap!!!
	last.ClapTrap::attack("Robot"); // así puedo acceder a ClapTrap? Sí
	last.guardGate();
	last.highFivesGuys(); // para que se vea que puedo acceder a todas las variables aqui que son public de las distintas classes que estoy heredando
	 */
	return 0;
}