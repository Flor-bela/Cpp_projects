/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 17:44:47 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/17 19:55:16 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure( void ) : AMateria( "cure" )
{
	std::cout << "Default constructor for Cure called" << std::endl;
}

Cure::Cure( Cure const & src ) : AMateria( src )
{
	std::cout << "Copy constructor for Cure called" << std::endl;
}

Cure::~Cure( void )
{
	std::cout << "Destructor for Cure called" << std::endl;
}

Cure&	Cure::operator=( Cure const & src )
{
	AMateria::operator=( src );
	return *this;
}

AMateria*	Cure::clone( void ) const
{
	AMateria*	ptrCure = new Cure(*this);
	return ptrCure;
}

void	Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
