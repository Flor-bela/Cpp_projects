/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 17:40:40 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/16 20:05:25 by fda-roch         ###   ########.fr       */
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

Character::Character( Character const & src )
{
	this->_name = src._name;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = src._inventory[i]; // solo esto?? dice que tienen que ser deep copies...
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

Character&	Character::operator=( Character const & src )
{
	this->_name = src._name;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = src._inventory[i]; // solo esto?? dice que tienen que ser deep copies...
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
		if( this->_inventory[i] ) // if it exists
			i++;
		else
		{
			this->_inventory[i] = m; // hmmm creo que lo tengo que hacer new....quizás no porque es un pointer!
			break;
		}
	}
}

void	Character::unequip( int idx ) // hmm creo que no debería hacer delete aquí....
{
	//delete them directly??? //subject says: save the addresses before calling unequip() or anything else...
	if (idx >= 0 && idx <= 3)
	{
		if( this->_inventory[idx] ) // si existe.... dejo así por ahora y después veo en el main....
			delete this->_inventory[idx]; // es verdad que así pierdo la Materia...
	}
}

void	Character::use( int idx, ICharacter& target )
{
	if (idx >= 0 && idx <= 3)
	{
		if ( this->_inventory[idx] )
			_inventory[idx]->use( target ); // usar el use de Materia directamente
	}
}