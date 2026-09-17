/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 12:43:06 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/17 19:24:50 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <string>
#include <iostream>

MateriaSource::MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL; // tengo que crear el inventorio..
	std::cout << "Default constructor for MateriaSource called" << std::endl;
}

MateriaSource::MateriaSource( MateriaSource const & src ) // ???
{
	int i = 0;
	while (i < 4)
	{
		this->_inventory[i] = NULL;
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
		i++;
	}
	std::cout << "Copy constructor for MateriaSource called" << std::endl;
}

MateriaSource::~MateriaSource( void )
{
	int	i = 0;
	while (i < 4)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		i++;
	}
	std::cout << "Destructor for MateriaSource called" << std::endl;
}

MateriaSource&	MateriaSource::operator=( MateriaSource const & src )
{
	if (this == &src)
		return *this;
	int i = 0;
	while (i < 4) // they have to be deep copies
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
		i++;
	}
	return *this;
}

void	MateriaSource::learnMateria( AMateria* m ) // le he puesto una m...si no como uso esto si no tiene nombre???
{
	int i = 0;

	while (i < 4)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m; // aquí en vez de clonarlo, tomo el control del puntero y ya despues cuando uso el destructor hago delete!
			break;
		}
		i++;
	}
	if (i == 4) // o sea no hizo break!!
		delete m; // porque significa que no lo he guardado, entonces no voy poder hacer delete con el destructor!
}

AMateria*	MateriaSource::createMateria( std::string const & type )
{
	int	i = 0;
	while (i < 4)
	{
		if (this->_inventory[i])
		{
			if ((this->_inventory[i]->getType() == type))
				return this->_inventory[i]->clone();
		}
		i++;
	}
	return 0;
}