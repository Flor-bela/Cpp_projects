/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 16:02:22 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/16 17:08:28 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>
#include <string>

AMateria::AMateria( void ) : _type("Default")
{
	std::cout << "Default constructor for AMateria called" << std::endl;
}

AMateria::AMateria( AMateria const & src ) : _type( src._type )
{
	std::cout << "Copy constructor for AMateria called" << std::endl;
}

AMateria::AMateria( std::string const & type )
{
	if (type == "ice")
		Ice(); ///???
	if (type == "cure")
		Cure(); //??? pero no deberia usar new??
	std::cout << "Parameterized constructor for AMateria called" << std::endl;
}

AMateria::~AMateria( void )
{
	std::cout << "Destructor for AMateria called" << std::endl;
}

AMateria&	AMateria::operator=( AMateria const & src )
{
	(void) src;
	 // when asigning a Materia to another, copying the type doesn´t make sense....???
	//this->_type = src._type; // entonces no debo hacer esto??
	return *this;
}

std::string const &	AMateria::getType( void ) const
{
	return this->_type;
}

void	AMateria::use( ICharacter& target ) // will display different things if it is an Ice Materia or a Cure Materia
{
	std::cout << "Materia Default use for " << target.getName() << std::endl; // ??? hago un mensaje así??
	// uhh necesito el << o target tendrá una opcion de dar el nombre/o el tipo...
	// creo que es esto, que uso la funcion de getName del Character...
}

