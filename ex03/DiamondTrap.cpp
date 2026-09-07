/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 20:36:57 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/07 16:44:05 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap( void ) : ClapTrap(), ScavTrap(), FragTrap()
{
	ClapTrap::_Name = ClapTrap::_Name + "_clap_name";
	this->_Name = "Default";
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 30;
	std::cout << "Default constructor called for DiamondTrap: " << this->_Name << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name + "_clap_name" ), ScavTrap( name ), FragTrap( name )
{
	this->_Name = name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 30;
	std::cout << "Parameterized constructor called for DiamondTrap: " << this->_Name << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	this->_Name = src._Name;
	std::cout << "Copy constructor called for DiamondTrap: " << this->_Name << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "Destructor called for DiamondTrap: " << this->_Name << std::endl;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & src )
{
	ClapTrap::operator=(src);
	this->_Name = src._Name;
	return *this;
}

void	DiamondTrap::attack( const std::string & target )
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap name is: " << this->_Name << std::endl;
	std::cout << "ClapTrap name is: " << ClapTrap::_Name << std::endl;
} 
