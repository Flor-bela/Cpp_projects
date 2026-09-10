/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 15:48:12 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/10 19:08:48 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat( void ) : Animal()
{
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << "Default constructor for Cat called" << std::endl;
}

Cat::Cat( Cat const & src ) : Animal( src ), _brain( src._brain ) // ??
{
	std::cout << "Copy constructor for Cat called" << std::endl;
}

Cat::~Cat( void )
{
	delete _brain;
	std::cout << "Destructor for Cat called" << std::endl;
}

Cat&	Cat::operator=( Cat const & src )
{
	if ( this != &src )
	{
		Animal::operator=( src );
		this->_brain = src._brain; // ??
	}
	return *this;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meowwww" << std::endl;
}