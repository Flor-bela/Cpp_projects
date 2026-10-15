/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 19:00:46 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/12 17:16:21 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int		main( void )
{
	const Animal*	animal = new Animal();
	std::cout << animal->getType() << std::endl;
	animal->makeSound();
	delete animal;

	const Animal*	puppy = new Dog();
	std::cout << puppy->getType() << std::endl;
	puppy->makeSound();
	delete puppy;

	const Animal*	kitty = new Cat();
	std::cout << kitty->getType() << std::endl;
	kitty->makeSound();
	delete kitty;

	//----------------------Dog()--------------------------
	Dog*	Lulu = new Dog();
	std::cout << Lulu->getType() << std::endl;
	Lulu->makeSound();
	Lulu->setIdea( 0, "I want food!" );
	Lulu->setIdea( 1, "I want to play!");
	std::cout << "Lulu's first idea is: " << Lulu->getIdea(0) << std::endl;
	std::cout << "Lulu's second idea is: " << Lulu->getIdea(1) << std::endl;
	
	Dog*	Lala = new Dog(*Lulu); // using Copy constructor
	// o
	//Dog	Lala(*Lulu); // y cambiar a . en vez de -> para acceder a las funciones
	std::cout << "Lala's first idea is: " << Lala->getIdea(0) << std::endl;
	std::cout << "Lala's second idea is: " << Lala->getIdea(1) << std::endl;
	Lulu->setIdea( 0, "I want to sleep!" );
	std::cout << "Lulu's first idea now is: " << Lulu->getIdea(0) << std::endl;
	std::cout << "Lala's first idea still is: " << Lala->getIdea(0) << std::endl;
	delete Lulu;
	delete Lala;

	//----------------------Cat()--------------------------
	Cat*	Kiri = new Cat();
	std::cout << Kiri->getType() << std::endl;
	Kiri->makeSound();
	Kiri->setIdea(0, "I'm Kiri :)");
	std::cout << "Kiri first idea is: " << Kiri->getIdea(0) << std::endl;

	Cat*	Mochi = new Cat();
	*Mochi = *Kiri; // using operator=
	std::cout << "Mochi first idea is: " << Mochi->getIdea(0) << std::endl;
	Mochi->setIdea(0, "I'm Mochi :D");
	std::cout << "Mochi first idea now is: " << Mochi->getIdea(0) << std::endl;
	std::cout << "Kiri first idea still is: " << Kiri->getIdea(0) << std::endl;
	delete Kiri;
	delete Mochi;
 
	//----------------------Array: half Dog() half Cat()--------------------------
	//Animal**	animals = new Animal*[10]; // en el heap
	// necesitaría asignar tal como abajo el numero de Dog() y Cat() que quisiera
	// y hacer delete a todos y al array en sí
	// delete [] animals;
	
	Animal*		animals[10]; // array de punteros
	for(int i = 0; i < 5; i++)
		animals[i] = new Dog();
	for(int i = 5; i < 10; i++)
		animals[i] = new Cat();
	animals[0]->makeSound();
	animals[9]->makeSound();
	for (int i = 0; i < 10; i++)
		delete animals[i];
		
	return 0;
}
