#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
	std::cout << "Constructor from Contact called" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Destructor from Contact called" << std::endl;
}

std::string	Contact::get_first_name(void) const
{
	// what if it is empty???
	return (this->first_name);
}

std::string	Contact::get_last_name(void) const
{
	// what if it is empty???
	return (this->last_name);
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