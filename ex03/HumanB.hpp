#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class	HumanB // will not always have a weapon
{
	private:
		std::string	name;
		Weapon	*weapon; // pointer? cannot be reference because this one can be NULL

	public:
		void	attack( void );
		void	setWeapon( Weapon &wpn );

		HumanB ( std::string str );
		~HumanB ( void );
};

#endif
