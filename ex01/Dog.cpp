/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 13:23:34 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/12 17:30:09 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

Dog::Dog( void ) : Animal()
{
	this->type = "Dog";
	this->_brain = new Brain(); // ??
	std::cout << "Default constructor for Dog called" << std::endl;
}

Dog::Dog( Dog const & src ) : Animal( src ) // ??
{
	this->_brain = new Brain(*(src._brain)); // así uso la copia constructor de Brain!
	std::cout << "Copy constructor for Dog called" << std::endl;
}

Dog::~Dog( void )
{
	delete this->_brain; // ?? imagino que sí??
	std::cout << "Destructor for Dog called" << std::endl;
}

Dog&	Dog::operator=( Dog const & src )
{
	if ( this != &src )
	{
		Animal::operator=( src ); // usa el operator= de Animal aprovechando codigo
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
	return this->_brain->getIdea( index );  // no hago más ninguna comprobación aquí porque ya la hago en brain....?? dejo asi?
}

void	Dog::setIdea( int index, std::string idea )
{
	this->_brain->setIdea( index, idea );
}