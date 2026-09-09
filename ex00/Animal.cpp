/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 13:13:10 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/09 16:05:44 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <string>
#include <iostream>

Animal::Animal( void ) : type("") // leave it empty is is like this?
{
	std::cout << "Default constructor for Animal called" << std::endl;
}

Animal::Animal( Animal const & src ) : type( src.type ) // solo así? es lo unico que tengo que copiar....
{
	std::cout << "Copy constructor for Animal called" << std::endl;
}

Animal::~Animal( void )
{
	std::cout << "Destructor for Animal called" << std::endl;
}

Animal&	Animal::operator=( Animal const & src )
{
	this->type = src.type;
	return *this;	// devolver el valor del puntero this con *
}

std::string	Animal::getType( void ) const // solo así?
{
	return( this->type );
}


void	Animal::makeSound( void )
{
	std::cout << "Animal Sound" << std::endl; // cambiar esto después a otro mensaje talvez...
}