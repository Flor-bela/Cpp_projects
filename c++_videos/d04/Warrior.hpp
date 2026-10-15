#ifndef WARRIOR_HPP
# define WARRIOR_HPP

#include "Character.hpp"

class Warrior: public Character
{
	public:
		Warrior( void );
		Warrior( Warrior const & src );
		~Warrior( void );

		Warrior& operator=( Warrior const & src);

		virtual void	sayHello( void );

};

#endif
