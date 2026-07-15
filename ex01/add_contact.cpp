/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_contact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 17:50:05 by fda-roch          #+#    #+#             */
/*   Updated: 2026/07/15 19:30:07 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string	get_input(std::string input)
{
	std::string	buffer;
	
	while (buffer.empty())
	{
		std::cout << input;
		std::getline(std::cin, buffer, '\n');
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
