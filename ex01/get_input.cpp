/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 17:50:05 by fda-roch          #+#    #+#             */
/*   Updated: 2026/07/16 16:24:09 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include <iostream>
#include <cctype>

std::string	check_if_valid(std::string	buffer)
{
	size_t	i;

	i = 0;
	while (i < buffer.length())
	{
		if (!isspace(buffer[i]))
			return buffer;
		i++;
	}
	buffer.clear();
	return buffer;
}

std::string	get_input(std::string input)
{
	std::string	buffer;
	
	while (buffer.empty())
	{
		std::cout << input;
		std::getline(std::cin, buffer, '\n');
		buffer = check_if_valid(buffer);
	}
	return buffer;
}

