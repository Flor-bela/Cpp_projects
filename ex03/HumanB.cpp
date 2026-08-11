/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 19:12:32 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/11 13:18:04 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB ( std::string str ) : name(str), weapon(NULL) // así puedo inicializarlo a NULL!!! y no pasaría nada si hacen attack() antes de setWeapon()
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

void	HumanB::setWeapon( Weapon &wpn ) // recibo como referencia!
{ // y después envío la dirección de memória de esa referencia, y por eso envío un puntero porque cuando inicio HumanB no tiene arma! y no puedo tener una referencia NULL
	weapon = &wpn;
}