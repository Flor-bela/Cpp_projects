/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <fda-roch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 16:53:22 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/07 17:41:10 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include <iostream>

int		main( void )
{
	Zombie	*Bob = newZombie("Bob");
	Zombie	*Tim = newZombie("Tim");

	// solo para usarlos y no hacer delete y así ver si de verdad no son borrados con su propio destructor // efectivamente!! Si no hago manualmente delete, estos Zombies que fueron allocados con new (en heap) no serán destruidos!!!
	std::cout << Bob << std::endl; 
	std::cout << Tim << std::endl;

	// si no uso delete puedo ver con valgrind que sigo teniendo esa memoria ocupada de los Zombies que fueron allocados manualmente con new de la funcion newZombie!!!
	delete Bob;
	delete Tim;

 	randomChump("Bob2");
	randomChump("Tim2");
	
	return 0;
}
