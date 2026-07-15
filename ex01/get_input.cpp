/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 17:50:05 by fda-roch          #+#    #+#             */
/*   Updated: 2026/07/15 21:58:03 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include <iostream>
#include <cctype> // for the isspace()

std::string	check_if_valid(std::string	buffer)
{
	size_t	i;

	i = 0;
	while (i < buffer.length())
	{
		if (!isspace(buffer[i]))
			return(buffer);
		i++;
	}
	buffer.clear(); // if arrived here it means that the buffer only has spaces so we need to clear the buffer
	return (buffer);
}

std::string	get_input(std::string input)
{
	std::string	buffer;
	
	while (buffer.empty())
	{
		std::cout << input;
		// limit here that if the input if phone number, then only let the numbers be accessible from the keyboard
		// and if it is the darkest secret then add **** on the terminal!!!!!
		std::getline(std::cin, buffer, '\n');
		buffer = check_if_valid(buffer);
	}
	return (buffer);
}

