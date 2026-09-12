/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 15:48:12 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/12 16:41:18 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

Cat::Cat( void ) : Animal()
{
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << "Default constructor for Cat called" << std::endl;
}

Cat::Cat( Cat const & src ) : Animal( src )
{
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea( i, src.getIdea(i));
	std::cout << "Copy constructor for Cat called" << std::endl;
}

Cat::~Cat( void )
{
	delete this->_brain;
	std::cout << "Destructor for Cat called" << std::endl;
}

Cat&	Cat::operator=( Cat const & src )
{
	if ( this != &src )
	{
		Animal::operator=( src );
		for (int i = 0; i < 100; i++)
			this->_brain->setIdea( i, src.getIdea(i));
	}
	return *this;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meowwww" << std::endl;
}

std::string	Cat::getIdea( int index ) const
{
	return this->_brain->getIdea(index);
}

void	Cat::setIdea( int index, std::string idea )
{
	this->_brain->setIdea( index, idea );
}