/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <fda-roch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 16:53:20 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/07 18:22:36 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// this function creates a Zombie (class Zombie)
#include "Zombie.h" // ?? or create a general .h??? 
#include <string>

Zombie*	newZombie( std::string name )
{
	// need to name the zombie with the string name....but Zombie has name in private...
	// return a pointer to Zombie -> needs to be allocated in heap since it is going to be used outside
	Zombie	*newZombie = new Zombie(name);  // in the heap with new
	
	// but this way it not really naming it...I am just passing the name to the constructor...not sure if it is this
	// what if I need to use a pointer to the member attribute and then give the name with this function?? It may be it
	// Pointer to the member attribute: ???
	
	return (newZombie);
}