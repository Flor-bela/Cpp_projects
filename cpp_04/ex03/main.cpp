/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 16:37:05 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/17 20:20:24 by fda-roch         ###   ########.fr       */
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

// quitar los mensajes de los constructores y destructores!!!

int		main( void )
{
	IMateriaSource*	src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	//std::cout << me->getName() << std::endl;
	//me->equip(new Ice());
	//me->use(0, *me);
	
	AMateria*	tmp; // un puntero sí puedo pero un objeto no porque es una clase abstracta
	tmp = src->createMateria("ice");
	me->equip(tmp); // 0
	tmp = src->createMateria("cure");
	me->equip(tmp); // 1

	//me->use(0, *me); // ice
	//me->use(1, *me); // cure
	//me->use(2, *me); // nada

	ICharacter*	bob = new Character("bob");
	//std::cout << bob->getName() << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete src;
	delete me;
	

	// Crear una historia? De un personaje...así quizás sea mejor!

	/* Equipar una quinta materia (cuando el inventario ya está lleno).

	Usar o desequipar índices vacíos o fuera de rango (como -1 o 5).

	Construir un personaje por copia, modificar el original y verificar que el clon no se vea afectado.
	 */

	 
	/* MateriaSource*	test = new MateriaSource();
	test->learnMateria(new Ice());
	test->learnMateria(new Cure());
	
	MateriaSource	copy(*test);
	AMateria*		tmp;
	tmp = copy.createMateria("cure");
	std::cout<< "tmp type is " << tmp->getType() << std::endl;
	
	Character		tmp2("Kiri");
	std::cout << "tmp2 character name is " << tmp2.getName() << std::endl;
	tmp->use(tmp2); // el puntero usa cure en Kiri!
	
	tmp2.equip(tmp); // pero ahora Kiri se quiere curar a si misma, se lo equipa to be able to heal itself
	tmp2.use(0, tmp2); // heal itself!
	
	AMateria*	lostMaterias[4]; // guardar para después hacer delete porque si no pierdo estos punteros que hago unequip!!
	lostMaterias[0] = tmp;

	tmp2.unequip(0); // si uso esto, es porque devuelvo a main el puntero de tmp, entonces en main necesito liberarlo.
	// si no hago unequip, el destructor de tmp2 le hará delete!!!
	
	//delete copy.createMateria("cure"); // esto devuelve un AMateria* por eso tengo que hacer delete si no tengo leaks en main!!... ( debería devolver una copia del cure de la posicion 1)

	
	delete lostMaterias[0]; //porque es un puntero! y no lo he liberado dentro de Character!!!
	delete test; */
	


	return 0;
}