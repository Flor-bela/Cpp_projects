/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 18:39:31 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/11 12:43:07 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class	HumanA // will always have a weapon (so should use a reference because it can never be void)
{
	private:
		std::string	name;
		Weapon		&weapon; // referencia tendría que inicializarla justo aquí no?? creo que es por eso que puedo hacerlo si lo pongo como initialized list en el contructor!!!
	
	public:
		void	attack( void );

		HumanA (std::string str, Weapon &wpn ); // takes the weapon in its contructor
		~HumanA ( void );
};

#endif
