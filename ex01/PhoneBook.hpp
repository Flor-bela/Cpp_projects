#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);

		int	current_index;
		Contact	contacts[8]; // así? debería estar en privado??
};

#endif