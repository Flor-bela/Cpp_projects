/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:47:32 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/03 18:10:36 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap( void ) : ClapTrap( )
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "Default constructor called for ScavTrap: " << this->_Name << std::endl;
}

ScavTrap::ScavTrap( std::string name ) :  ClapTrap( name )
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "Parameterized constructor called for ScavTrap: " << this->_Name << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap( src )
{
	std::cout << "Copy constructor called for ScavTrap: " << this->_Name << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "Destructor called for ScavTrap: " << this->_Name << std::endl;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & src )
{
	ClapTrap::operator=(src); // el return se ignora, o sea el ClapTrap
	/* his->_Name = src._Name;
	this->_HitPoints = src._HitPoints;
	this->_EnergyPoints = src._EnergyPoints;
	this->_AttackDamage = src._AttackDamage; */
	return *this;
}

void	ScavTrap::attack( const std::string & target )
{
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << "ScavTrap " << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
		this->_EnergyPoints--;
	}
	else
		std::cout << "ScavTrap " << this->_Name << " cannot attack: no energy or no hit points left!" << std::endl;
	return ;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
	return ;
}

// solo para testear
void	ScavTrap::get_HitPoints( void ) const
{
	std::cout << "Hitpoints: " << this->_HitPoints << std::endl;

}

void	ScavTrap::get_EnergyPoints( void ) const
{
	std::cout << "Energypoints: " << this->_EnergyPoints << std::endl;
}