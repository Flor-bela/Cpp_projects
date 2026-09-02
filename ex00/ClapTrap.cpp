/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 20:09:24 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/02 21:01:24 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( void ) // ?? este tengo que crearlo?
{
}

ClapTrap::ClapTrap( std::string name ) : _Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) // puedo ponerlo en dos lineas??
{
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	this->operator=(src); // ?? así puedo?
}
ClapTrap::~ClapTrap( void )
{
}

ClapTrap &	ClapTrap::operator=( ClapTrap const & src ) //?
{
	this->_Name = src._Name;		// porqué este = tiene otro color?
	this->_HitPoints = src._HitPoints;
	this->_EnergyPoints = src._EnergyPoints;
	this->_AttackDamage = src._AttackDamage;
	return *this;
}

void	ClapTrap::attack( const std::string & target ) // ??????????????????
{
	// si el target tiene puntos debería perderlos....
	// uy pero target es string........tiene que ser consigo mismo...con el ClapTrap que está siendo llamado...
	if (_EnergyPoints > 0)
	{
		// then attack

		_EnergyPoints--; // needs to use one EnergyPoint to attack
	}
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	// do I lose _HitPoints too??
	this->_AttackDamage = this->_AttackDamage + amount; // ???
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (_EnergyPoints > 0)
	{
		this->_HitPoints = this->_HitPoints + amount;
		_EnergyPoints--;
	}
	return ;
}
