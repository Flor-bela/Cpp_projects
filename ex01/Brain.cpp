/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:24:18 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/12 17:20:36 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain( void )
{
	std::cout << "Default contructor for Brain called" << std::endl;
}

Brain::Brain( Brain const & src )
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = src.ideas[i]; // esto???
	}
	std::cout << "Copy constructor for Brain called" << std::endl;
}

Brain::~Brain( void )
{
	std::cout << "Destructor for Brain called" << std::endl;
}

Brain&	Brain::operator=( Brain const & src )
{
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = src.ideas[i]; // esto???
	}
	return *this;
}

std::string	Brain::getIdea( int index ) const
{
	if ( index >= 0 && index <= 99 )
		return this->ideas[index];
	return "Ups, incorrect index, please try again";
}

void	Brain::setIdea( int index, std::string const & idea )
{
	if ( index >= 0 && index <= 99 )
		this->ideas[index] = idea;
}
