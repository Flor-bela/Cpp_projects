#include "Integer.hpp"
#include <iostream>

Integer::Integer( int const n ) : _n( n )
{
	std::cout << "Constructor called with value: " << n << std::endl;
	return;
}

Integer::~Integer( void )
{
	std::cout << "Destructor called with value: " << this->_n << std::endl;
	return;
}

int	Integer::getValue( void ) const
{
	return this->_n;
}

Integer&	Integer::operator=( Integer const & rhs ) // entiendo!!
{
	std::cout << "Assignation operator called from  " << this->_n;
	std::cout << " to " << rhs.getValue() << std::endl;

	this->_n = rhs.getValue();
	return *this; // return the value:: why is only this?? -> because we are returning the whole class Integer!!!
}

Integer	Integer::operator+( Integer const & rhs) const // entiendo!!!
{
	std::cout << "Addtion operator called with " << this->_n;
	std::cout << " and " << rhs.getValue() << std::endl;
	//std::cout << " and " << rhs << std::endl; // podría hacer esto directamente, pero en realidad estoy pasando una referencia de la class Integer, así que tiene .getValue también

	return Integer(this->_n + rhs.getValue());
}

// why is this one not inside the class? It says it takes the parameter std::ostream & o, but how???
std::ostream & operator<<( std::ostream & o, Integer const & rhs ) // aún no entiendo bien...
{
	o << rhs.getValue();
	return o;
} // std::cout << "a: " << a << std::endl; // we can use it just like this!!!
