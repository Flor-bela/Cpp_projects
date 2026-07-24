/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 17:50:12 by fda-roch          #+#    #+#             */
/*   Updated: 2026/07/24 21:28:23 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "utils.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	_current_index = 0;
	_total_contacts = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::add_contact( )
{
	Contact	contact;
	
	contact.set_first_name(get_input("first name: "));
	contact.set_last_name(get_input("last name: "));
	contact.set_nickname(get_input("nickname: "));
	contact.set_phone_number(get_input("phone number: "));
	contact.set_darkest_secret(get_input("darkest secret: "));

	contacts[_current_index] = contact;
	_current_index++;
	
	if (_total_contacts < 8)
		_total_contacts++;
	if (_current_index == 8)
		_current_index = 0;
}

void	PhoneBook::print_contacts( ) const
{
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	int			i;

	i = 0;
	while (i < _total_contacts)
	{
		firstname = check_contact_len(contacts[i].get_first_name());
		lastname = check_contact_len(contacts[i].get_last_name());
		nickname = check_contact_len(contacts[i].get_nickname());
		std::cout << "\033[34m" <<  "|" << std::setw(10) << i
			<< "|" << std::setw(10) << firstname
			<< "|" << std::setw(10) << lastname
			<< "|" << std::setw(10) << nickname
			<< "|" << "\033[0m" << std::endl;
		i++;
	}
}

void	PhoneBook::filter_index( ) const
{
	std::string	input_search;
	int	i;
	
	i = 0;
	while (1)
	{
		std::cout << "Type the index of the contact you want to see or BACK: ";
		std::getline(std::cin, input_search, '\n');
		if (input_search == "BACK")
			return ;
		if (input_search.length() == 1 && input_search[0] >='0' && input_search[0] <='7')
		{
			i = input_search[0] - '0';
			if (contacts[i].get_first_name().empty())
			{
				std::cout << "\033[33m" << "No contact saved at index: " << i << "\033[0m" << std::endl;
				continue;
			}
			std::cout << "\033[31m" << "index: " << "\033[0m" << "\033[34m" << i << "\033[0m" << std::endl;
			std::cout << "\033[31m" << "first name: " << "\033[0m" << "\033[34m" << contacts[i].get_first_name() << "\033[0m" << std::endl;
			std::cout << "\033[31m" << "last name: " << "\033[0m" << "\033[34m" << contacts[i].get_last_name() << "\033[0m" << std::endl;
			std::cout << "\033[31m" << "nickname: " << "\033[0m" << "\033[34m" << contacts[i].get_nickname() << "\033[0m" << std::endl;
			std::cout << "\033[31m" << "phone number: " << "\033[0m" << "\033[34m" << contacts[i].get_phone_number() << "\033[0m" << std::endl;
			std::cout << "\033[31m" << "darkest secret: " << "\033[0m" << "\033[34m" << contacts[i].get_darkest_secret() << "\033[0m" << std::endl;
		}
		else
			std::cout << "\033[33m" << "Invalid index." << "\033[0m" << std::endl;
	}
}

