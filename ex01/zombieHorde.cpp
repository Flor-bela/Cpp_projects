/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <fda-roch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 17:57:11 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/07 18:50:16 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// with new and array....hmm but what about the names??? Will all have the same name???

#include "Zombie.h"
#include <string>

Zombie*	zombieHorde( int N, std::string name) // hmm tal vez la string tenga el nombre de todos??? Y tengo que separarlos por espacios???
{
	Zombie *horde = new Zombie[N];

	int	i;
	for (i = 0; i < N; i++)
	{
		horde[i].set_name( name ); // and here name them... but how??? call the function to name them... I need to create some in Zombie class for sure...
		//horde[i].announce( ); // maybe I need to remove announce from the constructor?? this way it 
	}
	
	// delete only on the main file
	// pointer to member attibute?? hmm no creo porque despues de este ejercicio es que viene lo del los punteros
	//std::string	Zombie::*ptr = NULL;
	//ptr = &Zombie::Zombie;
		
	return (horde); // how to make sure I am returning the head of the array??
	
}