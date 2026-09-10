/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 19:00:46 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/10 19:48:08 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int		main( void )
{
	Animal*	doggie = new Dog();

	doggie->makeSound();
	// vamos meter ideas en el cerebro del perro:
	

	delete doggie;

	return 0;
}
