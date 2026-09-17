/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 17:40:40 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/17 18:34:09 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include <string>

Character::Character( void )
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << "Default contructor for Character called" << std::endl;
}

Character::Character( std::string const & name ) : _name( name )
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << "Parameterized contructor for Character called" << std::endl;
}

// en esta copia el Character acaba de nascer!!!
Character::Character( Character const & src ) // During copy, the Materias of a Character must be deleted before the new ones are added
//to their inventory
{
	this->_name = src._name;
	int i = 0;

	while (i < 4)
	{
		this->_inventory[i] = NULL;
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone(); // deep copy
		i++;
	}
	std::cout << "Copy contructor for Character called" << std::endl;
}

Character::~Character( void )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "Destructor for Character called" << std::endl;
}

Character&	Character::operator=( Character const & src ) // aquí si es copia de una character ya existente...osea tendrá cosas dentro o no... por eso necesito hacer delete primero para asegurarme si tienen algo, que lo borro bien
{
	if (this == &src)
		return *this; // importante porque si no borraria su inventario y despues ya no tendría nada para copiar!
	this->_name = src._name;
	int i = 0;

	while (i < 4)
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i]; // primero delete si tiene algo
			this->_inventory[i] = NULL; // decir null
		}
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone(); //para ser deep copy
		i++;
	}
	return *this;
}

std::string const &	Character::getName() const
{
	return this->_name;
}

void	Character::equip( AMateria* m )
{
	int	i = 0;
	
	while ( i < 4 )
	{
		if ( !this->_inventory[i] ) // if it doesn´t exist
		{
			this->_inventory[i] = m; // si hiciera clone, después tenía problemas cuando hago unequip!
			break;
		}
		i++;
	}
}

void	Character::unequip( int idx ) // subject says we cannot delete it
{
	if (idx >= 0 && idx <= 3)
	{
		if( this->_inventory[idx] )
			this->_inventory[idx] = NULL;
	}
}

void	Character::use( int idx, ICharacter& target )
{
	if (idx >= 0 && idx <= 3)
	{
		if ( this->_inventory[idx] )
			this->_inventory[idx]->use( target ); // usar el use de Materia directamente
	}
}