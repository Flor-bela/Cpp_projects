/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 13:59:03 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/17 19:53:22 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

// he quitado el include AMateria.hpp -> para no crear una inclusion circular!!!
#include <string>

class AMateria; // Forward declaration??

class ICharacter
{
	public:
		virtual ~ICharacter( void ) {}; // así creo que ya no lo tengo que definir en cpp porque tiene {}
		virtual std::string const &	getName() const = 0;
		virtual void	equip( AMateria* m ) = 0;
		virtual void	unequip( int idx ) = 0;
		virtual void	use( int idx, ICharacter& target ) = 0;
};

#endif