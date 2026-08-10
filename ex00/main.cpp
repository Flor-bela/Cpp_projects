/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 16:53:22 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/10 14:12:44 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int		main( void )
{
	Zombie	*Bob = newZombie("Bob");
	Zombie	*Tim = newZombie("Tim");
	
	// solo para usarlos y no hacer delete y así ver si de verdad no son borrados con su propio destructor // efectivamente!! Si no hago manualmente delete, estos Zombies que fueron allocados con new (en heap) no serán destruidos!!!
	Bob->announce();
	Tim->announce();
	
	// si no uso delete puedo ver con valgrind que sigo teniendo esa memoria ocupada de los Zombies que fueron allocados manualmente con new de la funcion newZombie!!!
	delete Bob;
	delete Tim;

	randomChump("Bob2"); // estos se anuncian automaticamente 
	randomChump("Tim2");
	
	return 0;
}
