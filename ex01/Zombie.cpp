/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 16:53:09 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/10 17:32:57 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( void ) // esto tiene que ser void para hacer el array
{
}

Zombie::~Zombie( void )
{
	std::cout << this->name << " was destroyed" << std::endl; // not sure if I should do this in this exercise
}

void	Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::set_name( std::string str )
{
	this->name = str;
	return ;
}
