/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 15:45:36 by fda-roch          #+#    #+#             */
/*   Updated: 2026/07/21 11:28:00 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include <iostream>
#include "PhoneBook.hpp"

std::string	get_command( void )
{
	std::string	input;
	
	std::cout << "Write one of these commands: ADD, SEARCH or EXIT: ";
	std::getline(std::cin, input, '\n');

	return input;
}

int	main( void )
{
	PhoneBook	phonebook;
	std::string	input;

	input = get_command();
	while (input != "EXIT")
	{
		if (input == "ADD")
		{
			phonebook.add_contact();
			input = get_command();
		}
		else if (input == "SEARCH")
		{
			print_header();
			phonebook.print_contacts();
			phonebook.filter_index();
			input = get_command();
		}
		else
		{
			std::cout << "\033[33m" << "Wrong command, please try again." << "\033[0m" << std::endl;
			input = get_command();
		}
	}
	return 0;
}
