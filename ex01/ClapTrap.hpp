/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 20:09:32 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/03 17:57:07 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap( void );							// default constructor -> with void right to be the default?? // with message
		ClapTrap( std::string name );				// parameterized constructor es este??? constructor with name // with message
		ClapTrap( ClapTrap const & src );			// copy constructor
		~ClapTrap( void );							// destructor // with message

		ClapTrap& operator=( ClapTrap const & src );	// operator = (asignation)
		
		void	attack( const std::string & target );	// when attacks -> target loses _HitPoints; (the amount based on the _AttackDamage of the attacker ) ?? ->> costs 1 _EnergyPoints;
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );		// regains <amount> in _HitPoints ( I guess it sums them ) ->> costs 1 _EnergyPoints;
		
	protected: // para que ahora ScavTrap puede heredarlas
		std::string				_Name;
		unsigned int			_HitPoints; // health // if there are none, it cannot do anything
		unsigned int			_EnergyPoints; // if there are none, it cannot do anything
		unsigned int			_AttackDamage;

};

#endif