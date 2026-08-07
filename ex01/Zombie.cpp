/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <fda-roch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 16:53:09 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/07 20:00:27 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( void ) // esto tiene que ser void para hacer el array
{
	//announce(); // si lo pongo aquí, aquí aún no tienen nombre, solo cuando llamo la funcion set_name en zombieHorde....pero es raro tener entonces una classe que no de nombre...
}

Zombie::~Zombie( void )
{
	std::cout << "Zombie " << this->_name << " was destroyed" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::set_name( std::string name )
{
	this->_name = name;
	return ;
}
