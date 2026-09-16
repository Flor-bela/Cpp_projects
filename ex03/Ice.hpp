/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 23:20:12 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/16 18:37:16 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Ice: public AMateria
{
	// no tengo que poner _type en private porque lo hereda de AMateria!

	public:
		Ice( void ); // this->_type = ice;
		Ice( Ice const & src );
		~Ice( void );
		
		Ice&	operator=( Ice const & src );
		
		virtual AMateria*	clone( void ) const;
		virtual void		use( ICharacter& target );

};


#endif