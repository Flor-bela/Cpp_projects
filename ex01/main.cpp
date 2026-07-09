/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 15:45:36 by fda-roch          #+#    #+#             */
/*   Updated: 2026/07/09 20:47:40 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// necesito otro .h o .hpp para incluir todos??

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	Contact		contact;
	std::string	input;
	std::string	buffer;
	int	i;
	
	i = 0;

	std::cout << "Write one of these options: ADD, SEARCH or EXIT: ";
	std::cin >> input;

	while (input != "EXIT")
	{
		if (input == "ADD")
		{
			if (i == 8)
				i = 0;
			// recordar que no pueden estar vacíos!!! hmmm como hago eso??
			std::cin.ignore(); // to avoid the last character that is the newline (because of ENTER) saved from std::cin >> input
			std::cout << "first name: ";
			std::getline(std::cin, buffer);
			contact.set_first_name(buffer);
			std::cout << "last name: ";
			std::getline(std::cin, buffer);
			contact.set_last_name(buffer);
			std::cout << "nickname: ";
			std::getline(std::cin, buffer);
			contact.set_nickname(buffer);
			std::cout << "phone number: ";
			std::getline(std::cin, buffer);
			contact.set_phone_number(buffer);
			std::cout << "darkest secret: ";
			std::getline(std::cin, buffer);
			contact.set_darkest_secret(buffer);
			phonebook.contacts[i] = contact; // setting like it says at the end. but is this a copy? or a pointer??? hmmmm
			i++;
			std::cout << "Write one of these options: ADD, SEARCH or EXIT: ";
			std::cin >> input;
		}	
		else if (input == "SEARCH")
		{
			// como enseñarlo para que solo se vean 10 caracteres??? hmmm
			std::cout << "Phonebook contact 0 first name is " << phonebook.contacts[i].get_first_name() << std::endl;
			std::cout << "Phonebook contact 0 last name is " << phonebook.contacts[i].get_last_name() << std::endl;
			
			std::cout << "Write one of these options: ADD, SEARCH or EXIT: ";
			std::cin >> input;
		}
		else
		{
			std::cout << "Wrong input, please try again" << std::endl;
			std::cout << "Write one of these options: ADD, SEARCH or EXIT: ";
			std::cin >> input;
		}
	}
	return (0);
}