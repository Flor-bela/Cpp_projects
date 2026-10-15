#ifndef CHARACTER_HPP
# define CHARACTER_HPP

class Character
{
	public:												// Canonical orthodox form:
		Character( void );								// default constructor
		Character( Character const & src );				// copy constructor
		virtual ~Character( void );								// destructor
		
		Character& operator=( Character const & src );	//operator=

		virtual void	sayHello( void );

};

#endif