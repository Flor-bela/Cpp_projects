/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <fda-roch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 16:53:03 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/31 13:32:14 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	private:
		std::string	name;

	public:
		Zombie( void );
		~Zombie( void );

		void	announce( void );
		void	set_name( std::string str);
};

Zombie*	zombieHorde( int N, std::string name);

#endif