/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 23:11:07 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/12 23:59:34 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>

class AMateria
{
	protected:
		//(...) falta algo aquí!
		std::string	_type; // ?? _type = default?

	public:
		AMateria( void );												// default constructor
		AMateria( AMateria const & src );								// copy constructor
		AMateria( std::string const & type );							// constructor con el nombre del type de materia!
		virtual ~AMateria( void );												// destructor , creo que tiene que ser virtual
		
		AMateria&	operator=( AMateria const & src );					//operator=
		//(....)

		std::string const & getType ( void ) const; // Returns the materia type

		virtual AMateria*	clone( void ) const = 0;
		virtual void		use( ICharacter& target ); // ICharacter is an interface!

};


#endif