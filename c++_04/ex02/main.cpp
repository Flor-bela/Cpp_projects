/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 18:37:50 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/12 19:13:30 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int		main( void )
{
	// --------------------------------------------------
	//AAnimal		error;
	AAnimal*	puppy1 = new Dog();
	AAnimal*	kitty1 = new Cat();
	AAnimal&	refPuppy = *puppy1;

	puppy1->makeSound();
	kitty1->makeSound();

	std::cout << refPuppy.getType() << std::endl;

	delete puppy1;
	delete kitty1;

	// ----------------------------------------------------
	//const AAnimal*	animal = new Animal();

	const AAnimal*	puppy = new Dog();
	std::cout << puppy->getType() << std::endl;
	puppy->makeSound();
	delete puppy;

	const AAnimal*	kitty = new Cat();
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
	
	Dog*	Lala = new Dog(*Lulu);
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
	*Mochi = *Kiri;
	std::cout << "Mochi first idea is: " << Mochi->getIdea(0) << std::endl;
	Mochi->setIdea(0, "I'm Mochi :D");
	std::cout << "Mochi first idea now is: " << Mochi->getIdea(0) << std::endl;
	std::cout << "Kiri first idea still is: " << Kiri->getIdea(0) << std::endl;
	delete Kiri;
	delete Mochi;

	//----------------------Array: half Dog() half Cat()--------------------------
	AAnimal*		animals[10]; // array de punteros
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
