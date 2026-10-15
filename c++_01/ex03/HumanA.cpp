/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 19:08:55 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/11 12:40:04 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA ( std::string str, Weapon &wpn ) : name(str), weapon(wpn)
{
}

HumanA::~HumanA ( void )
{
}

void	HumanA::attack( void )
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
	return ;
}
