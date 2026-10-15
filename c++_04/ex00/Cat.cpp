/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 15:48:12 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/10 14:49:02 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include <iostream>

Cat::Cat( void ) : Animal()
{
	this->type = "Cat";
	std::cout << "Default constructor for Cat called" << std::endl;
}

Cat::Cat( Cat const & src ) : Animal(src)
{
	std::cout << "Copy constructor for Cat called" << std::endl;
}

Cat::~Cat( void )
{
	std::cout << "Destructor for Cat called" << std::endl;
}

Cat&	Cat::operator=( Cat const & src )
{
	if (this != &src) // para evitar auto-asignacion
		Animal::operator=(src);
	return *this;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meowwww" << std::endl;
}