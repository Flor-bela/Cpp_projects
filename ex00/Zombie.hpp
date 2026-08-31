/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <fda-roch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 16:53:03 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/31 12:39:55 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	private:
		std::string	name; // it says it should be named "name"

	public:
		Zombie( std::string str );
		~Zombie( void );

		void	announce( void );
};


Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif