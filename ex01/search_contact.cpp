/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_contact.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 17:50:00 by fda-roch          #+#    #+#             */
/*   Updated: 2026/07/15 19:51:05 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include <iomanip>

void	print_header(void)
{
	std::cout << "|" << std::setw(10) << "index"
		<< "|" << std::setw(10) << "first name"
		<< "|" << std::setw(10)	<< "last name"
		<< "|" << std::setw(10) << "nickname"
		<< "|" << std::endl;
}

std::string	check_contact_len(std::string input)
{
	std::string	too_long;
	
	if (input.length() > 10)
	{
		too_long = input;
		too_long[9] = '.';
		too_long.resize(10);
		return (too_long);
	}
	return (input);
}

void	print_contacts(const PhoneBook *phonebook) // as a const so people know that I won´t change anything inside Phonebook, only passing a pointer to not pass a copy of it and to be memory more efficient this way
{
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	int	i;

	i = 0;
	while (i < 8)
	{
		firstname = check_contact_len(phonebook->contacts[i].get_first_name());
		lastname = check_contact_len(phonebook->contacts[i].get_last_name());
		nickname = check_contact_len(phonebook->contacts[i].get_nickname());
		std::cout << "|" << std::setw(10) << i
			<< "|" << std::setw(10) << firstname
			<< "|" << std::setw(10) << lastname
			<< "|" << std::setw(10) << nickname
			<< "|" << std::endl;
		i++;
	}
}


void	filter_index(const PhoneBook *phonebook)
{
	std::string	input_search;
	int	i;
	
	i = 0;
	while (1)
	{
		std::cout << "Type the index of the contact you want to see or BACK: ";
		std::getline(std::cin, input_search, '\n');
		if (input_search == "BACK")
			return ; // break ; (before was this)
		if (input_search.length() == 1 && input_search[0] >='0' && input_search[0] <='7')
		{
			i = input_search[0] - '0';
			if (phonebook->contacts[i].get_first_name().empty())
			{
				std::cout << "No contact saved at index: " << i << std::endl;
				continue; //para volver al inicio y no continuar escribiendo abajo index, first name...
			}
			std::cout << "index: " << i << std::endl;
			std::cout << "first name: " << phonebook->contacts[i].get_first_name() << std::endl;
			std::cout << "last name: " << phonebook->contacts[i].get_last_name() << std::endl;
			std::cout << "nickname: " << phonebook->contacts[i].get_nickname() << std::endl;
			std::cout << "phone number: " << phonebook->contacts[i].get_phone_number() << std::endl;
			std::cout << "darkest secret: " << phonebook->contacts[i].get_darkest_secret() << std::endl;
		}
		else
			std::cout << "Invalid index." << std::endl;
	}
}
