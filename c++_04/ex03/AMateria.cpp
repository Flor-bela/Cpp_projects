/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 16:02:22 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/17 18:08:40 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>
#include <string>

AMateria::AMateria( void )
{
	std::cout << "Default constructor for AMateria called" << std::endl;
}

AMateria::AMateria( AMateria const & src ) : _type( src._type ) // aquí sí debo copiar porque solo copio si es un ice con un ice, no un ice con un cure, no funciona porque son distintas clases
{
	// este crea un objeto nuevo a partir de otro, por eso necesito que su tipo sea establecido
	std::cout << "Copy constructor for AMateria called" << std::endl;
}

AMateria::AMateria( std::string const & type ) : _type( type )
{
	std::cout << "Parameterized constructor for AMateria called" << std::endl;
}

AMateria::~AMateria( void )
{
	std::cout << "Destructor for AMateria called" << std::endl;
}

AMateria&	AMateria::operator=( AMateria const & src )
{
	(void) src; // when asigning a Materia to another, copying the type doesn´t make sense....
	return *this;
}

std::string const &	AMateria::getType( void ) const
{
	return this->_type;
}

void	AMateria::use( ICharacter& target ) // will display different things if it is an Ice Materia or a Cure Materia
{
	(void) target;
}


