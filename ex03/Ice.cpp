/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 16:44:24 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/17 19:55:22 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice( void ) : AMateria( "ice" ) // pongo esto aqui igualmente aunque sea abstracta la clase?? Sí!!!
{
	std::cout << "Default constructor for Ice called" << std::endl;
}

Ice::Ice( Ice const & src ) : AMateria( src )
{
	std::cout << "Copy constructor for Ice called" << std::endl;
}

Ice::~Ice( void )
{
	std::cout << "Destructor for Ice called" << std::endl;
}

Ice& Ice::operator=( Ice const & src )
{
	AMateria::operator=(src); // when asigning a Materia to another, copying the type doesn´t make sense....???
	return *this;
}

AMateria*	Ice::clone( void ) const
{// tengo que usar un clone real del objeto actual!!! por eso uso *this!
	AMateria*	ptrIce = new Ice(*this);
	return ptrIce;
}

void	Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<std::endl;
}