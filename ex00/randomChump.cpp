/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <fda-roch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 16:53:14 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/07 17:27:27 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include <string>

void	randomChump( std::string name )
{
	Zombie	newZombie = Zombie(name); // this one is on stack --- will be destructor immediately after (so I will see the destructor immediately being called??)
	return ;
}
