#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	public:
		Contact(void);
		~Contact(void);

		std::string	get_first_name(void) const;
		std::string	get_last_name(void) const;
		std::string	get_nickname(void) const;
		std::string	get_phone_number(void) const;
		std::string	get_darkest_secret(void) const;
		
		void	set_first_name(std::string name);
		void	set_last_name(std::string name);
		void	set_nickname(std::string name);
		void	set_phone_number(std::string number);
		void	set_darkest_secret(std::string secret);
	
	private: // they are in private but the functions to get these variables are in public, I know from the videos that you can do this...but not 100% sure this is correct.
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
};

#endif