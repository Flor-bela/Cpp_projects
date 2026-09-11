/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 19:00:46 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/11 23:47:56 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int		main( void )
{
	/* Animal*		animal = new Animal();
	std::cout << animal->getType() << std::endl;
	animal->makeSound();
	delete animal;

	Animal*		puppy = new Dog();
	std::cout << puppy->getType() << std::endl;
	puppy->makeSound();
	delete puppy;*/


	Dog*		Lulu = new Dog();
	std::cout << Lulu->getType() << std::endl;
	Lulu->makeSound();
	Lulu->setIdea( 0, "I want food!" );
	Lulu->setIdea( 1, "I want to play!");
	std::cout << "Lulu's first idea is: " << Lulu->getIdea(0) << std::endl;
	std::cout << "Lulu's second idea is: " << Lulu->getIdea(1) << std::endl;
	
	Dog Lala(*Lulu);
	std::cout << "Lala's first idea is: " << Lala.getIdea(0) << std::endl;
	std::cout << "Lala's second idea is: " << Lala.getIdea(1) << std::endl;

	Lulu->setIdea( 0, "I want to sleep!" );
	std::cout << "Lulu's first idea now is: " << Lulu->getIdea(0) << std::endl;
	std::cout << "Lala's first idea still is: " << Lala.getIdea(0) << std::endl;
	delete Lulu;
	

	// HACER LO MISMO PARA CAT!!!!
	


	
	
	// Array -> half Dog() half Cat()
	//Animal**	animals = new Animal*[10]; // en el heap
	// necesitaría asignar tal como abajo el numero de Dog() y Cat() que quisiera
	// y hacer delete a todos y al array en sí
	// delete [] animals;
	
	/* Animal*		animals[10]; // array de punteros
	for(int i = 0; i < 5; i++)
		animals[i] = new Dog();
	for(int i = 5; i < 10; i++)
		animals[i] = new Cat();
	
	for (int i = 0; i < 10; i++)
		delete animals[i]; */

	return 0;
}
