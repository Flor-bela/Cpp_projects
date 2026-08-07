/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <fda-roch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 16:53:03 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/07 18:42:36 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	private:
		std::string	_name; // it says it should be named "name"

	public:
		Zombie( void ); // not sure if I can do this in this exercise...
		~Zombie( void );

		void	announce( void );
		// should I put here a setter for the name??? -> no because it  wouldn´t work either....I think
		void	set_name( std::string name);
};

#endif