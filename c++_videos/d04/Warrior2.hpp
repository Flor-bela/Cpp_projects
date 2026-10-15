#ifndef WARRIOR2_HPP
# define WARRIOR2_HPP

#include "ACharacter.hpp"
#include <string>

class Warrior2: public ACharacter
{
	public:
		virtual void	attack( std::string const & target );

};

#endif