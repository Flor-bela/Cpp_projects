/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 13:13:10 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/10 18:02:36 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <string>
#include <iostream>

Animal::Animal( void ) : type("Animal")
{
	std::cout << "Default constructor for Animal called" << std::endl;
}

Animal::Animal( Animal const & src ) : type( src.type )
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
	return *this;
}

std::string	Animal::getType( void ) const
{
	return this->type;
}

void	Animal::makeSound( void ) const
{
	std::cout << "Animal Sound" << std::endl; // cambiar esto después a otro mensaje talvez...
}