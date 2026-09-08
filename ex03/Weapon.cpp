/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <fda-roch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 18:30:48 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/31 13:36:23 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon ( std::string Type ) : type(Type)
{
}

Weapon::~Weapon ( void )
{
}

const std::string&	Weapon::getType( void )
{
	return this->type;
}

void	Weapon::setType( std::string str )
{
	type = str;
	return ;
}


