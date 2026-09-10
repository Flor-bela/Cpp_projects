/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:24:18 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/10 19:43:26 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain( void ) // que hago con ideas??? hago new ideas aqui??? hmm creo que no
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
