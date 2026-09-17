/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 23:11:07 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/17 18:02:56 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria( void );												// default constructor
		AMateria( AMateria const & src );								// copy constructor
		AMateria( std::string const & type ); // pero en realidad no puedo crear un objeto porque es Abstracta esta clase!							// constructor con el nombre del type de materia!
		virtual ~AMateria( void );												// destructor , creo que tiene que ser virtual
		
		AMateria&	operator=( AMateria const & src );					//operator=


		std::string const & getType ( void ) const; // Returns the materia type, ice, cure???

		virtual AMateria*	clone( void ) const = 0;
		virtual void		use( ICharacter& target ); // ICharacter is an interface!

};

#endif