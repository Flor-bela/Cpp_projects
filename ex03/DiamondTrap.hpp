/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 20:36:55 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/06 21:27:18 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* In this exercise, you will create a monster: 
a ClapTrap that’s half FragTrap, half ScavTrap. 
It will be named DiamondTrap, and it will inherit from both FragTrap AND
ScavTrap. This is so risky! */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

// ClapTrap instance will only be created once!

// aquí es donde tengo que tener cuidado, porque Scav y Trap tienen ambas ClapTrap también...
class DiamondTrap: public ScavTrap, public FragTrap
{
	public:
		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap( void );

		DiamondTrap&	operator=( DiamondTrap const & src );

		void	attack( const std::string & target ); // de ScavTrap (tiene que ser)
		void	whoAmI( void ); // display its name and the ClapTrap name

		// getters (to delete!!!
		void	get_EnergyPoints( void );

	private:
		std::string				_Name; // same name as ClapTrap one
		unsigned int			_HitPoints;
		unsigned int			_EnergyPoints;
		unsigned int			_AttackDamage;
};


#endif

// con virtual solo comparten 1 copia de ClapTrap???
// same variable name as in ClapTrap for _Name (but it will be unique to DiamondTrap -> its own attribute)