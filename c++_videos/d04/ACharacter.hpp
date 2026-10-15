#ifndef ACHARACTER_HPP
# define ACHARACTER_HPP

#include <string>

class ACharacter  // esta no la he escrito en la forma Canónica Ortodoxa!
{
	public:
		virtual void	attack( std::string const & target ) = 0; // pure method! 
		void			sayHello( std::string const & target );

};

#endif