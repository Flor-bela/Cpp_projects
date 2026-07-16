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
	return (_first_name);
}

std::string	Contact::get_last_name(void) const
{
	return (_last_name);
}

std::string	Contact::get_nickname(void) const
{
	return (_nickname);
}

std::string	Contact::get_phone_number(void) const
{
	return (_phone_number);
}

std::string	Contact::get_darkest_secret(void) const
{
	return (_darkest_secret);
}

void	Contact::set_first_name(std::string name)
{
	_first_name = name;
}

void	Contact::set_last_name(std::string name)
{
	_last_name = name;
}

void	Contact::set_nickname(std::string name)
{
	_nickname = name;
}

void	Contact::set_phone_number(std::string number)
{
	_phone_number = number;
}

void	Contact::set_darkest_secret(std::string secret)
{
	_darkest_secret = secret;
}