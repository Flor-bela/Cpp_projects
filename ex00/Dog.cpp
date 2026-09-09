/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 13:23:34 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/09 16:10:20 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// type será Dog -> inicializarlo y cambiar ese valor que viene de Animal de la clase base/padre/madre 

#include "Animal.hpp"
#include "Dog.hpp"
#include <iostream>

Dog::Dog( void ) : Animal()
{
	this->type = "Dog";
	std::cout << "Default constructor for Dog called" << std::endl;
}

Dog::Dog( Dog const & src ) : Animal(src)
{
	// no debería llamar a Dog(src)?? No creo, porque necesito que coja todas las variables de Animal y además así usa la copia de Animal que ya por si copia lo que está en type
	std::cout << "Copy constructor for Dog called" << std::endl;
}

Dog::~Dog( void )
{
	std::cout << "Destructor for Dog called" << std::endl;
}

Dog&	Dog::operator=( Dog const & src )
{
	if (this != &src)
		Animal::operator=(src); // usa el operator= de Animal aprovechando codigo
	return *this;
}

void	Dog::makeSound( void )
{
	std::cout << "Woof Woof" << std::endl;
}