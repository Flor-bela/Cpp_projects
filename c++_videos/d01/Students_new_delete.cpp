#include "Students_new_delete.hpp"
#include <iostream>

Students::Students ( std::string login ) : _userLogin( login )
{
	std::cout << "Student " << this->_userLogin << " was created" << std::endl;
}

Students::~Students ( void )
{
	std::cout << "Student " << this->_userLogin << " was deleted" << std::endl;
}
