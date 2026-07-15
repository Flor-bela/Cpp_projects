/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 15:45:36 by fda-roch          #+#    #+#             */
/*   Updated: 2026/07/15 19:05:17 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

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
			add_contact(&phonebook);
			input = get_command();
		}
		else if (input == "SEARCH")
		{
			// Show all contacts:
			std::cout << "|     index" << "|" << "first name" << "|" << " last name" << "|" << "  nickname" << "|" << std::endl;
			print_contacts(&phonebook);
			
			// Filter by index:
			std::string	input_search;
			while (1)
			{
				int	i;

				i = 0;
				std::cout << "Type the index of the contact you want to see or BACK: ";
				std::getline(std::cin, input_search, '\n');
				
				if (input_search == "BACK")
					break; // to leave the loop? yes
				
				if (input_search.length() == 1 && input_search[0] >='0' && input_search[0] <='7')
				{
					i = input_search[0] - '0'; // convert like in atoi
				
					if (phonebook.contacts[i].get_first_name().empty())
					{
						std::cout << "No contact saved at index: " << i << std::endl;
						continue; //para volver al inicio y no continuar escribiendo abajo index, first name...
					}
					std::cout << "index: " << i << std::endl;
					std::cout << "first name: " << phonebook.contacts[i].get_first_name() << std::endl;
					std::cout << "last name: " << phonebook.contacts[i].get_last_name() << std::endl;
					std::cout << "nickname: " << phonebook.contacts[i].get_nickname() << std::endl;
					std::cout << "phone number: " << phonebook.contacts[i].get_phone_number() << std::endl;
					std::cout << "darkest secret: " << phonebook.contacts[i].get_darkest_secret() << std::endl;
				}
				else
					std::cout << "Invalid index." << std::endl;
			}
			input = get_command();
		}
		else
		{
			std::cout << "Wrong command, please try again" << std::endl;
			input = get_command();
		}
	}
	return (0);
}
