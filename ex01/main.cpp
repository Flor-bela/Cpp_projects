/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <fda-roch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 18:36:16 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/07 20:00:36 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int		main( void )
{
	Zombie *horde = zombieHorde(10, "Bob"); // claro así todos se llaman lo mismo....
	
	delete [] horde;

	return 0;
}