#include "Students_new_delete_array.hpp"
#include <iostream>
#include <string>

int	Students::students_index = 0; // initialise non-member attributes at the top.

Students::Students( void )
{
	this->index = Students::students_index + 1;
	Students::students_index++;
	std::cout << "Student with index " << this->index << " was created" << std::endl;
}

Students::~Students( void )
{
	Students::students_index--;
	std::cout << "Student with index " << this->index << " was destroyed" << std::endl;
	
	std::cout << "We now have a total of -> " << Students::students_index << " <- students" << std::endl;
}