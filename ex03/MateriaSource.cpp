/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 12:43:06 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/16 19:56:22 by fda-roch         ###   ########.fr       */
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
	//*this->_inventory = NULL; // ??
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL; // tengo que crear el inventorio..
	std::cout << "Default constructor for MateriaSource called" << std::endl;
}

MateriaSource::MateriaSource( MateriaSource const & src ) // ???
{
	
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = src._inventory[i]; // ??? ver si existe??
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
	(void) src;
	// copying what??
	return *this;
}

void	MateriaSource::learnMateria( AMateria* m ) // le he puesto una m...si no como uso esto si no tiene nombre???
{
	int i = 0;

	while (i < 4)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m->clone();
			break;
		}
		i++;
	}
	delete m; // ??hmm pero no creo que debo hacer esto aquí porque si está creado fuera y aquí le hago delete entonces 
}

AMateria*	MateriaSource::createMateria( std::string const & type )
{
	int	i = 0;
	while (i < 4)
	{
		if (( this->_inventory[i]->getType()) == type )
			return (this->_inventory[i]->clone());
		i++;
	}
	return 0;
}