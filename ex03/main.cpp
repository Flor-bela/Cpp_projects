/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 16:37:05 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/16 20:12:43 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include <iostream>
#include <string>

int		main( void )
{
	 IMateriaSource*	src = new MateriaSource();
	src->learnMateria(new Ice()); // new Ice() este que he pasado lo he borrado dentro de la funcion learnMateria...
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	std::cout << me->getName() << std::endl;
	//me->equip(new Ice());
	//me->use(0, *me);
	
	AMateria*	tmp; // un puntero sí puedo pero un objeto no porque es una clase abstracta
	tmp = src->createMateria("ice");
	me->equip(tmp); // 0
	tmp = src->createMateria("cure");
	me->equip(tmp); // 1

	me->use(0, *me); // ice
	me->use(1, *me); // cure
	me->use(2, *me); // nada

	ICharacter*	bob = new Character("bob");
	std::cout << bob->getName() << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);

	// probar de MateriaSource:
	// constructores y operator=
	
	// probar de Character
	// unequip
	// constructores y operator=

	// ver AMateria!
	
	delete bob;
	delete src; // pero debo tener leaks, porque no borro lo que está dentro de src.
	delete me;

	return 0;
}