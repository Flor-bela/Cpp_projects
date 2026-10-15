#include "Balls_references.hpp"
#include <iostream>

Balls::Balls( void ) : number(0), colour("Green")
{
	std::cout << "Balls created" << std::endl;
}

Balls::~Balls( void )
{
	std::cout << "Balls destroyed" << std::endl;
}
