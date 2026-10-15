/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 20:08:00 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/15 16:41:09 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>

int		main(int argc, char **argv)
{
	if (argc != 2)
		return 1;
	
	Harl	harl;
	std::string	level = argv[1];

	harl.complain(level);
	return 0;
}