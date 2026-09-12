/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 13:13:10 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/12 18:34:44 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <string>
#include <iostream>

AAnimal::AAnimal( void ) : type("AAnimal")
{
	std::cout << "Default constructor for AAnimal called" << std::endl;
}

AAnimal::AAnimal( AAnimal const & src ) : type( src.type )
{
	std::cout << "Copy constructor for AAnimal called" << std::endl;
}

AAnimal::~AAnimal( void )
{
	std::cout << "Destructor for AAnimal called" << std::endl;
}

AAnimal&	AAnimal::operator=( AAnimal const & src )
{
	this->type = src.type;
	return *this;
}

std::string	AAnimal::getType( void ) const
{
	return this->type;
}
