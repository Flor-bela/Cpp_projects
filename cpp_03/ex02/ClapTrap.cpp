/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 20:09:24 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/03 17:12:22 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( void ) : _Name("Default"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "Default constructor called for ClapTrap: " << this->_Name << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "Parameterized constructor called for ClapTrap: " << this->_Name << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & src ) : _Name(src._Name),  _HitPoints(src._HitPoints), _EnergyPoints(src._EnergyPoints), _AttackDamage(src._AttackDamage)
{
	std::cout << "Copy constructor called for ClapTrap: " << this->_Name << std::endl;
}
ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor called for ClapTrap: " << this->_Name << std::endl;
}

ClapTrap &	ClapTrap::operator=( ClapTrap const & src )
{
	this->_Name = src._Name;
	this->_HitPoints = src._HitPoints;
	this->_EnergyPoints = src._EnergyPoints;
	this->_AttackDamage = src._AttackDamage;
	return *this;
}

void	ClapTrap::attack( const std::string & target )
{
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
		this->_EnergyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->_Name << " cannot attack: no energy or no hit points left!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (amount <= _HitPoints)
		this->_HitPoints = this->_HitPoints - amount;
	else
		this->_HitPoints = 0;
	std::cout << "ClapTrap " << this->_Name << " takes " << amount << " points of damage! Hit points remaining: " << this->_HitPoints << std::endl;
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		this->_HitPoints = this->_HitPoints + amount;
		this->_EnergyPoints--;
		std::cout << "ClapTrap " << this->_Name << " repairs itself, recovering " << amount << " hit points! Current health: " << this->_HitPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_Name << " cannot repair itself: no energy or no hit points left!" << std::endl;
	return ;
}
