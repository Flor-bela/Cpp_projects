/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 15:45:36 by fda-roch          #+#    #+#             */
/*   Updated: 2026/07/15 13:32:19 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// necesito otro .h o .hpp para incluir todos??
#include <iostream>
#include <string>
#include <iomanip>  // to manipulate the cout // should use it for search
#include <stdlib.h>  // for atoi
#include <stdio.h> // solo para usar printf
#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string	get_input(std::string input)
{
	std::string	buffer; // así resetea siempre y no tengo que usar buffer.clear()
	
	while (buffer.empty())
	{
		std::cout << input;
		std::getline(std::cin, buffer);
	}
	return (buffer);
}

void	add_contact(PhoneBook *phonebook)
{
	Contact	contact;
	
	contact.set_first_name(get_input("first name: "));
	contact.set_last_name(get_input("last name: "));
	contact.set_nickname(get_input("nickname: "));
	contact.set_phone_number(get_input("phone number: "));
	contact.set_darkest_secret(get_input("darkest secret: "));

	phonebook->contacts[phonebook->current_index] = contact;
	phonebook->current_index++;
	if (phonebook->current_index == 8)
		phonebook->current_index = 0;
}

std::string	check_contact_len(std::string	input)
{
	std::string	too_long;
	std::string	too_short;
	int			len;
	
	if (input.length() > 10) // too long
	{
		too_long = input;
		too_long[9] = '.';
		too_long.resize(10);
		return (too_long);
		//too_long.clear(); // I don´t think I need this since the function will close and clean the string
	}
	// too short
	else if (input.length() < 10) // or too short
	{
		len = input.length();
		too_short.resize(10 - len, ' ');
		// and now I print this too_short always before the actual word
		return (too_short + input);
	}
	else if (input.length() == 0) // empty (because we haven´t use ADD yet on those indexes)
	{
		too_short.resize(10, ' ');
		return (too_short);
	}
	return (input); // if we do not need to change anything	
}

void	print_contacts(PhoneBook *phonebook)
{
	Contact	contact;
	int	i;

	i = 0;
	while (i < 8)
	{
		contact.set_first_name(phonebook->contacts[i].get_first_name());
		contact.set_last_name(phonebook->contacts[i].get_last_name());
		contact.set_nickname(phonebook->contacts[i].get_nickname());

		contact.set_first_name(check_contact_len(contact.get_first_name())); // it will change it??? hmm not really it is a single pointer....
		contact.set_last_name(check_contact_len(contact.get_last_name()));
		contact.set_nickname(check_contact_len(contact.get_nickname()));

		std::cout << "|" << std::setw(10) << i << "|" << contact.get_first_name() << "|" << contact.get_last_name() << "|" << contact.get_nickname() << "|" << std::endl;
		i++;
	}
}

std::string	get_command(void)
{
	std::string	input;
	
	std::cout << "Write one of these options: ADD, SEARCH or EXIT: ";
	std::cin >> input;

	return (input);
}


int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;

	input = get_command(); // check other name for this function, print and ask???
	
	while (input != "EXIT")
	{
		if (input == "ADD")
		{
			std::cin.ignore(); // to avoid the last character that is the newline (because of ENTER) saved from std::cin >> input
			add_contact(&phonebook);

			input =get_command();
		}
		else if (input == "SEARCH")
		{
			//std::cout << "\033[2J" << std::flush; // no funciona bien...
			std::cin.ignore();
			// Showing all contacts:
			std::cout << "|     index" << "|" << "first name" << "|" << " last name" << "|" << "  nickname" << "|" << std::endl;
			print_contacts(&phonebook);
			
			// And now "filtering"
			std::string	input_search;
			while (1)
			{
				int	i;

				i = 0;
				std::cout << "Type the index of the contact you want to see or BACK: ";
				std::cin >> input_search;
				
				if (input_search == "BACK")
					break; // to leave the loop? yes
				
				if (input_search.length() == 1 && input_search[0] >='0' && input_search[0] <='7')
				{
					i = input_search[0] - '0'; // convert like in atoi
				
					if (phonebook.contacts[i].get_first_name().empty())
					{
						std::cout << "No contact saved at index: " << i << std::endl;
						//continue; ?? -> tendría que volver al inicio del while (1) aquí!
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
			// says it is ignored, so maybe shouldn´t write anything...just still asking for an input...
			std::cin.ignore();
			std::cout << "Wrong input, please try again" << std::endl;
			input = get_command();
		}
	}
	return (0);
}
