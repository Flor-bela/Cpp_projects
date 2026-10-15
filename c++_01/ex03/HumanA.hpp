/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <fda-roch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 18:39:31 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/31 13:33:13 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class	HumanA
{
	private:
		std::string	name;
		Weapon		&weapon;
	
	public:
		void	attack( void );

		HumanA (std::string str, Weapon &wpn );
		~HumanA ( void );
};

#endif
