/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <fda-roch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 19:12:32 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/31 13:34:15 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB ( std::string str ) : name(str), weapon(NULL)
{
}

HumanB::~HumanB ( void )
{
}

void	HumanB::attack( void )
{
	if (this->weapon != NULL)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon to attack with" << std::endl;
	return ;
}

void	HumanB::setWeapon( Weapon &wpn )
{
	weapon = &wpn;
}