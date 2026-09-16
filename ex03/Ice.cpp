/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 16:44:24 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/16 18:50:03 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include <iostream>

Ice::Ice( void ) : AMateria( ) // pongo esto aqui igualmente??
{
	this->_type = "ice";
	std::cout << "Default constructor for Ice called" << std::endl;
}

Ice::Ice( Ice const & src ) : AMateria( ) 
{
	(void) src; // tengo algo para copiar?? no creo
	std::cout << "Copy constructor for Ice called" << std::endl;
}

Ice::~Ice( void )
{
	//delete ptrIce; //??
	std::cout << "Destructor for Ice called" << std::endl;
}

Ice& Ice::operator=( Ice const & src )
{
	AMateria::operator=(src); // when asigning a Materia to another, copying the type doesn´t make sense....???
	return *this;
}

AMateria*	Ice::clone( void ) const
{
	AMateria*	ptrIce = new Ice(); // este si lo devuelvo lo tengo que eliminar aqui? creo que no
	return ptrIce;
}

void	Ice::use( ICharacter& target )
{
	std::cout << "* shoots and ice bolt at " << target.getName() << " *" <<std::endl;
}