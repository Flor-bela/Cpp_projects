/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 16:38:41 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/17 19:48:03 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Cure: public AMateria
{
	public:
		Cure( void );
		Cure( Cure const & src );
		~Cure( void );

		Cure& operator=( Cure const & src );

		virtual AMateria*	clone( void ) const;
		virtual void		use( ICharacter& target );

};

#endif