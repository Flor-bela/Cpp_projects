/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <fda-roch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 20:09:32 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/08 13:53:08 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( ClapTrap const & src );
		~ClapTrap( void );

		ClapTrap& operator=( ClapTrap const & src );
		
		void	attack( const std::string & target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
		
	private:
		std::string				_Name;
		unsigned int			_HitPoints;
		unsigned int			_EnergyPoints;
		unsigned int			_AttackDamage;

};

#endif