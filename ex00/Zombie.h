/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <fda-roch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 17:25:04 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/07 17:27:07 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// should it be called .h?? I want to save everything here...

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include "Zombie.hpp"
#include <string>

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif