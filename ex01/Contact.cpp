#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string	Contact::get_first_name(void) const
{
	return (first_name);
}

std::string	Contact::get_last_name(void) const
{
	return (last_name);
}

std::string	Contact::get_nickname(void) const
{
	return (nickname);
}

std::string	Contact::get_phone_number(void) const
{
	return (phone_number);
}

std::string	Contact::get_darkest_secret(void) const
{
	return (darkest_secret);
}

void	Contact::set_first_name(std::string name)
{
	first_name = name;
}

void	Contact::set_last_name(std::string name)
{
	last_name = name;
}

void	Contact::set_nickname(std::string name)
{
	nickname = name;
}

void	Contact::set_phone_number(std::string number)
{
	phone_number = number;
}

void	Contact::set_darkest_secret(std::string secret)
{
	darkest_secret = secret;
}