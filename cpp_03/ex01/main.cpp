/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <fda-roch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:47:36 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/08 13:54:01 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int		main( void )
{
	ClapTrap first("Robot");
	first.attack("Alexa");
	first.takeDamage(5);
	first.beRepaired(5);

	ScavTrap	second;
	second.attack("Alexa");
	second.takeDamage(50);
	second.takeDamage(50);
	second.beRepaired(5);
	second.guardGate();

	return 0;
}
