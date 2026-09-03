/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:47:34 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/03 18:02:13 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap: public ClapTrap //??
{
	public:
		ScavTrap( void );		// I still have to write them no???? Especially since they will have different names
		ScavTrap( std::string name );
		ScavTrap( ScavTrap const & src );
		~ScavTrap( void );

		ScavTrap& operator=(ScavTrap const & src);

		void	attack( const std::string & target ); // different message
		// do I have to write the others?? If the messages are the same, maybe I don´t have to
		void	guardGate( void );  // will display a message ScavTrap is now in Gate keeper mode.

		// just for testing:
		void	get_HitPoints( void ) const;
		void	get_EnergyPoints( void ) const;

};



// will inherit the constructors and destructor from ClapTrap
// however its constructors, destructor and attack() will print different messages
// when a ScavTrap is created, the program starts by constructing a ClapTrap. Destruction occurs in the reverse order.

// update ClapTrap first with the new attributes


#endif