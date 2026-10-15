/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 15:52:58 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/10 18:08:49 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int		main( void )
{
	// dynamic binding -> el compilador verifica el tipo real del objeto y lo "adapta"
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog(); // con virtual se comporta como Dog()
	const Animal*	i = new Cat(); // con virtual se comporta como Cat()

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;

	// static binding (sin virtual) -> compilador se basa solo en  el tipo de puntero
	const WrongAnimal*	wmeta = new WrongAnimal();
	const WrongAnimal*	wi = new WrongCat(); // sin virtual este se comporta todo como WrongAnimal!

	std::cout << wi->getType() << " " << std::endl; // nunca imprime el sonido del WrongCat() porque está tomandolo como un WrongAnimal!
	std::cout << wmeta->getType() << " " << std::endl;
	wi->makeSound();
	wmeta->makeSound();
	delete wi;
	delete wmeta;

	return 0;
}