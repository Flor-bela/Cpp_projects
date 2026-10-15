/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:15:45 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/10 18:31:26 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal( void ) : type("WrongAnimal")
{
	std::cout << "Default constructor for WrongAnimal called" << std::endl; 
}

WrongAnimal::WrongAnimal( WrongAnimal const & src ) : type(src.type)
{
	std::cout << "Copy constructor for WrongAnimal called" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "Destructor called for WrongAnimal called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=( WrongAnimal const & src )
{
	if (this != &src)
		this->type = src.type;
	return *this;
}

std::string	WrongAnimal::getType( void ) const
{
	return this->type;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal Sound" << std::endl;
}