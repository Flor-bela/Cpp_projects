/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 18:24:55 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/11 12:38:31 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
	private:
		std::string	type;
	
	public:
		const std::string&	getType( void );
		void	setType( std::string newType );
		
		Weapon( std::string Type );
		~Weapon (void );

};

#endif
