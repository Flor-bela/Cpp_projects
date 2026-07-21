#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
	public:
		Contact( void );
		~Contact( void );

		std::string	get_first_name( void ) const;
		std::string	get_last_name( void ) const;
		std::string	get_nickname( void ) const;
		std::string	get_phone_number( void ) const;
		std::string	get_darkest_secret( void ) const;
		
		void	set_first_name(std::string name);
		void	set_last_name(std::string name);
		void	set_nickname(std::string name);
		void	set_phone_number(std::string number);
		void	set_darkest_secret(std::string secret);
	
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

#endif