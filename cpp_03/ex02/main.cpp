/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 18:36:45 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/03 20:32:21 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main( void )
{
	ClapTrap first("Robot");
	first.attack("Alexa");
	first.takeDamage(5);
	first.beRepaired(5);

	ScavTrap	second("Cyborg");
	second.attack("Siri");
	second.takeDamage(50);
	second.takeDamage(50);
	second.beRepaired(5);
	second.guardGate();

	FragTrap	third("Dog");
	third.attack("Google");
	third.takeDamage(20);
	third.takeDamage(79);
	third.beRepaired(50);
	third.highFivesGuys();

	return 0;
}