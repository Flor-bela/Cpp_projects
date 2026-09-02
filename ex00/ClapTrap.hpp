/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 20:09:32 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/02 21:00:21 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap( void );							// default constructor -> with void right to be the default?? // with message
		ClapTrap( std::string name );				// default constructor es este??? constructor with name // with message
		ClapTrap( ClapTrap const & src );			// copy constructor
		~ClapTrap( void );							// destructor // with message

		// no estoy segura si devuelve un objeto tal cual o una referencia....
		ClapTrap& operator=( ClapTrap const & src );	// operator = (asignation)
		
		// all these functions should print a message to describe what happens
		// ClapTrap <name> attacks <target>, causing <damage> points of damage!
		void	attack( const std::string & target );	// when attacks -> target loses _HitPoints; (the amount based on the _AttackDamage of the attacker ) ?? ->> costs 1 _EnergyPoints;
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );		// regains <amount> in _HitPoints ( I guess it sums them ) ->> costs 1 _EnergyPoints;
		
	private:
		std::string				_Name;
		unsigned int			_HitPoints; // (int)?? health // if there are none, it cannot do anything
		unsigned int			_EnergyPoints; // if there are none, it cannot do anything
		unsigned int			_AttackDamage;

};

// the ClapTrap instances should not interact directly with one another, 
// and the parameters (which ones???) will not refer to another instance of ClapTrap

#endif