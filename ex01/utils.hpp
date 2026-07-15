#ifndef UTILS_HPP
# define UTILS_HPP

#include "PhoneBook.hpp"
#include <string>

// ADD
void		add_contact(PhoneBook *phonebook);
std::string	get_input(std::string input);

// SEARCH
void		print_header(void);
void		print_contacts(const PhoneBook *phonebook);
std::string	check_contact_len(std::string input);
void		filter_index(const PhoneBook *phonebook);

#endif