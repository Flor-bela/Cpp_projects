#ifndef INTEGER_HPP
# define INTEGER_HPP

#include <iostream>

class Integer
{
	public:
		Integer( int const n );	// constructor
		~Integer (void );		// destructor

		int	getValue ( void ) const;

		Integer&	operator=( Integer const  & rhs); // returns a new instance (?)
		Integer		operator+( Integer const & rhs) const; // const because we do not change the values, we only return a new value!

		private:
			int	_n;
};

std::ostream & operator<<( std::ostream & o, Integer const & rhs); // ??? why is it ostream??

#endif