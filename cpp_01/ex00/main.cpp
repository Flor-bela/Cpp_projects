/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <fda-roch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 16:53:22 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/31 13:31:15 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int		main( void )
{
	Zombie	*Bob = newZombie("Bob");
	Zombie	*Tim = newZombie("Tim");

	Bob->announce();
	Tim->announce();
	
	delete Bob;
	delete Tim;

	randomChump("Bob2");
	randomChump("Tim2");
	
	return 0;
}
