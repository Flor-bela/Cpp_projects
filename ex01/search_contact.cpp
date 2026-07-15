/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_contact.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 17:50:00 by fda-roch          #+#    #+#             */
/*   Updated: 2026/07/15 19:25:36 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include <iomanip>

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
		firstname = phonebook->contacts[i].get_first_name();
		lastname = phonebook->contacts[i].get_last_name();
		nickname = phonebook->contacts[i].get_nickname();

		firstname = check_contact_len(firstname);
		lastname = check_contact_len(lastname);
		nickname = check_contact_len(nickname);

		std::cout << "|" << std::setw(10) << i
			<< "|" << std::setw(10) << firstname
			<< "|" << std::setw(10) << lastname
			<< "|" << std::setw(10) << nickname
			<< "|" << std::endl;
		i++;
	}
}


