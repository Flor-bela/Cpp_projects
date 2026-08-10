/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 16:53:20 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/10 14:07:17 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie*	newZombie( std::string name )
{
	// return a pointer to Zombie -> needs to be allocated in heap since it is going to be used outside
	Zombie	*newZombie = new Zombie(name);  // in the heap with new
	
	return (newZombie);
}
