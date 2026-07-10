#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Contructor PhoneBook called" << std::endl;
	this->current_index = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor PhoneBook called" << std::endl;
}