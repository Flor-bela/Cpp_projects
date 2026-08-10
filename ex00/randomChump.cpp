/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 16:53:14 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/10 14:08:02 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

void	randomChump( std::string name )
{
	Zombie	chump = Zombie(name); // o Zombie chump(name) -> this one is on stack --- will be destroyed immediately after (so I will see the destructor immediately being called)
	chump.announce(); // el randomChump se tiene que "anunciar"
	return ;
}
