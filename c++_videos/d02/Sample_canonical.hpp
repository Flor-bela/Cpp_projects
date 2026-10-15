#ifndef SAMPLE_CANONICAL_HPP
# define SAMPLE_CANONICAL_HPP

#include <iostream>

class Sample_canonical
{
	public:
		Sample_canonical( void );									// Canonical (( a default ->(void) constructor in this case, but we will see a different version later))
		Sample_canonical( int const n );
		Sample_canonical( Sample_canonical const & src );			// Canonical // (( a copy constuctor ))
		~Sample_canonical( void );									// Canonical (( a destructor ))

	Sample_canonical&	operator=( Sample_canonical const & rhs);	// Canonical // an assignment operator (allowing to make assignments from an instance of this class)

	int	getFoo( void ) const;

	private:
		int	_foo;

};

std::ostream&	operator<<(std::ostream& o, Sample_canonical const & i); // curioso que si pongo esta función dentro de la class, me dice que tiene demasiados parametros para esta función....


#endif