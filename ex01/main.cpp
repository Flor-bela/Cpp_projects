/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 15:45:36 by fda-roch          #+#    #+#             */
/*   Updated: 2026/07/15 20:53:59 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include <iostream>
#include "PhoneBook.hpp"

std::string	get_command(void)
{
	std::string	input;
	
	std::cout << "Write one of these commands: ADD, SEARCH or EXIT: ";
	std::getline(std::cin, input, '\n');

	return (input);
}

int	main(void)
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
			print_header(); // 1st: Show all contacts
			phonebook.print_contacts();
			phonebook.filter_index(); // 2nd: Filter by index
			input = get_command();
		}
		else
		{
			std::cout << "Wrong command, please try again." << std::endl;
			input = get_command();
		}
	}
	return (0);
}
