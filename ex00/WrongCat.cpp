/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 17:26:21 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/10 18:31:49 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat( void ) : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "Default constructor for WrongCat called" << std::endl;
}

WrongCat::WrongCat( WrongCat const & src ) : WrongAnimal(src)
{
	std::cout << "Copy constructor for WrongCat called" << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << "Destructor for WrongCat called" << std::endl;
}

WrongCat& WrongCat::operator=( WrongCat const & src )
{
	if (this != &src)
		WrongAnimal::operator=(src);
	return *this;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Woemmmm" << std::endl;
}