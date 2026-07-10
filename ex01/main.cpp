/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <fda-roch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 15:45:36 by fda-roch          #+#    #+#             */
/*   Updated: 2026/07/10 18:28:35 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// necesito otro .h o .hpp para incluir todos??
#include <iostream>
#include <string>
#include <iomanip>  // to manipulate the cout (I'm not using it I)
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


int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;
	int			i;

	// quizas hacer de esto una funcion!
	std::cout << "Write one of these options: ADD, SEARCH or EXIT: ";
	std::cin >> input;
	while (input != "EXIT")
	{
		if (input == "ADD")
		{
			std::cin.ignore(); // to avoid the last character that is the newline (because of ENTER) saved from std::cin >> input
			add_contact(&phonebook);

			std::cout << "Write one of these options: ADD, SEARCH or EXIT: ";
			std::cin >> input;
		}
		else if (input == "SEARCH")
		{
			//std::cout << "\033[2J" << std::flush; // no funciona bien...
			
			std::string	too_long;
			std::string	too_short;
			std::string	too_short2;
			int	j;
			
			std::cin.ignore();
			i = 0;
			j = 0;
			std::cout << "|     Index" << "|" << "first name" << "|" << " last name" << "|" << "  nickname" << "|" << std::endl;
			// make this into a function
			while (i < 8)
			{
				// pero no quiero sustituirlo en el phonebook (despues cuando tenga una funcion para search, creo Contact contact y solo modifico ahí para imprimir en la pantalla)
				if (phonebook.contacts[i].get_first_name().length() > 10) // too long
				{
					too_long = phonebook.contacts[i].get_first_name();
					too_long[9] = '.';
					too_long.resize(10);
					phonebook.contacts[i].set_first_name(too_long);
					too_long.clear();
				}
				// too short
				else if (phonebook.contacts[i].get_first_name().length() < 10) // or too short
				{
					j = phonebook.contacts[i].get_first_name().length();
					too_short.resize(10 - j, ' ');
					// and now I print this too_short always before the actual word
					phonebook.contacts[i].set_first_name(too_short + phonebook.contacts[i].get_first_name());
				}
				else if (phonebook.contacts[i].get_first_name().length() == 0) // empty (because we haven´t use ADD yet on those indexes)
				{
					too_short.resize(10, ' ');
					phonebook.contacts[i].set_first_name(too_short);
				}
				std::cout << "|" << phonebook.contacts[i].get_first_name() << "|" << phonebook.contacts[i].get_last_name() << "|" << phonebook.contacts[i].get_nickname() << "|" << phonebook.contacts[i].get_phone_number() << "|" << phonebook.contacts[i].get_darkest_secret() << "|" << std::endl;
				i++;
			}
			std::cout << "Write one of these options: ADD, SEARCH or EXIT: ";
			std::cin >> input;
		}
		else
		{
			// says it is ignored, so maybe shouldn´t write anything...just still asking for an input...
			std::cin.ignore();
			std::cout << "Wrong input, please try again" << std::endl;
			std::cout << "Write one of these options: ADD, SEARCH or EXIT: ";
			std::cin >> input;
		}
	}
	return (0);
}
