#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
// should I leave these empty???
}

Contact::~Contact(void)
{

}

std::string	Contact::get_first_name(void) const
{
	return (this->first_name);
}

std::string	Contact::get_last_name(void) const
{
	return (this->last_name);
}

std::string	Contact::get_nickname(void) const
{
	return (this->nickname);
}

std::string	Contact::get_phone_number(void) const
{
	return (this->phone_number);
}

std::string	Contact::get_darkest_secret(void) const
{
	return (this->darkest_secret);
}

void	Contact::set_first_name(std::string name)
{
	this->first_name = name;
	return ;
}

void	Contact::set_last_name(std::string name)
{
	this->last_name = name;
	return ;
}

void	Contact::set_nickname(std::string name)
{
	this->nickname = name;
	return ;
}

void	Contact::set_phone_number(std::string number)
{
	this->phone_number = number;
	return ;
}

void	Contact::set_darkest_secret(std::string secret)
{
	this->darkest_secret = secret;
	return ;
}