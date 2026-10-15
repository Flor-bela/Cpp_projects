/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_utils.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 17:50:00 by fda-roch          #+#    #+#             */
/*   Updated: 2026/07/24 21:29:15 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include <iomanip>
#include <iostream>

void	print_header( )
{
	std::cout << "\033[31m" << "|" << std::setw(10) << "index"
		<< "|" << std::setw(10) << "first name"
		<< "|" << std::setw(10)	<< "last name"
		<< "|" << std::setw(10) << "nickname"
		<< "|" <<  "\033[0m" << std::endl;
	return ;
}

std::string	check_contact_len(std::string input)
{
	std::string	too_long;
	
	if (input.length() > 10)
	{
		too_long = input;
		too_long[9] = '.';
		too_long.resize(10);
		return too_long;
	}
	return input;
}
