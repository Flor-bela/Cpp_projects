#include "Integer.hpp"
#include <iostream>

int		main( void )
{
	Integer	a(5);
	Integer	b(10);
	Integer	c(15);
	Integer	d(0);

	//std::cout << a.getValue() << std::endl;
	//std::cout << "a sum with b is: " << a.operator+(b) << std::endl; // everytime we use an operator, since we return an integer, it constructs it, and then destroys it!!!
	
	// Operator + (different ways to use it):
	std::cout << " --- Operator + --- " << std::endl;
	Integer	ab(a.operator+(b));
	std::cout << "ab is: " << ab.getValue() << std::endl;

	std::cout << "d is: " << d.getValue() << std::endl;
	d = c + a;
	std::cout << "d now is: " << d.getValue() << std::endl;



	// Operator = (different ways to use it):
	std::cout << " --- Operator = --- " << std::endl;
	c.operator=(b);
	std::cout << "c now is: " << c.getValue() << std::endl;
	c.operator=(Integer (42));
	std::cout << "c finally is: " << c.getValue() << std::endl;

	a = Integer( 8 ); // this integer of 8 is created first, and then asigned to a and immediately destroyed!!!
	std::cout << "a now is: " << a.getValue() << std::endl;

	// Operator <<:
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "ab: " << ab << std::endl;

	// a = 8;
	// b = 10;
	// c = 42;
	// d = 20;
	// ab = 15;

	return 0;
}
