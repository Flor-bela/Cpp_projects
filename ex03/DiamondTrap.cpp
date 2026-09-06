/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 20:36:57 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/06 21:38:58 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap( void ) : ClapTrap("Default_clap_name"), ScavTrap(), FragTrap() // name in ClapTrap deberia darle algo aqui???
{
	//ClapTrap::_Name = ClapTrap::_Name + "_clap_name"; // funciona pero es mala practica
	this->_Name = "Default";
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 30;
	std::cout << "Default constructor called for DiamondTrap: " << this->_Name << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name + "_clap_name" ), ScavTrap(), FragTrap()
{
	this->_Name = name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50; // deberia ser 50 de Scav, si es 100 es de Frag // ver que valores tiene, si tiene el de Scav o de Frag
	this->_AttackDamage = 30;
	std::cout << "Parameterized constructor called for DiamondTrap: " << this->_Name << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) : ClapTrap(), ScavTrap(), FragTrap()
{
	this->_Name = src._Name;
	this->_HitPoints = src._HitPoints;
	this->_EnergyPoints = src._EnergyPoints;
	this->_AttackDamage = src._AttackDamage;
	std::cout << "Copy constructor called for DiamondTrap: " << this->_Name << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & src )
{
	this->_Name = src._Name;
	this->_HitPoints = src._HitPoints;
	this->_EnergyPoints = src._EnergyPoints;
	this->_AttackDamage = src._AttackDamage;
	return *this;
}

void	DiamondTrap::attack( const std::string & target )
{
	ScavTrap::attack(target); // usar de ScavTrap directamente
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap name is: " << this->_Name << std::endl;
	std::cout << "ClapTrap name is: " << ClapTrap::_Name << std::endl;
} 
// display its name and the ClapTrap name


void	DiamondTrap::get_EnergyPoints( void )
{
	std::cout << "Energy Points: " << this->_EnergyPoints << std::endl;
}