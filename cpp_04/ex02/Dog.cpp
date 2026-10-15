/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 13:23:34 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/12 18:36:07 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

Dog::Dog( void ) : AAnimal()
{
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << "Default constructor for Dog called" << std::endl;
}

Dog::Dog( Dog const & src ) : AAnimal( src ) // ??
{
	this->_brain = new Brain(*(src._brain)); // así uso la copia constructor de Brain!
	std::cout << "Copy constructor for Dog called" << std::endl;
}

Dog::~Dog( void )
{
	delete this->_brain;
	std::cout << "Destructor for Dog called" << std::endl;
}

Dog&	Dog::operator=( Dog const & src )
{
	if ( this != &src )
	{
		AAnimal::operator=( src ); // usa el operator= de AAnimal aprovechando codigo
		*(this->_brain) = *(src._brain);  // así uso el operator = de Brain!!!
	}
	return *this;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof Woof" << std::endl;
}

std::string	Dog::getIdea( int index ) const
{
	return this->_brain->getIdea( index );
}

void	Dog::setIdea( int index, std::string idea )
{
	this->_brain->setIdea( index, idea );
}