/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 18:36:43 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/07 13:25:29 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "Default constructor called for FragTrap: " << this->_Name << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name )
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "Parameterized constructor called for FragTrap: " << this->_Name << std::endl;
}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap( src )
{
	std::cout << "Copy constructor called for FragTrap: " << this->_Name << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "Destructor called for FragTrap: " << this->_Name << std::endl;
}

FragTrap & FragTrap::operator=( FragTrap const & src )
{
	ClapTrap::operator=(src);
	return *this;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "High Five!!!!!" << std::endl;
}
