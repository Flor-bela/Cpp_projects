/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 18:36:16 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/10 17:31:02 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main( void )
{
	Zombie *horde = zombieHorde(10, "Bob");
	int	i;

	i = 0;
	while (i < 10)
	{
		horde[i].announce();
		i++;
	}
	delete [] horde;
	return 0;
}