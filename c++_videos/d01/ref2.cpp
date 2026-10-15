#include <iostream>
#include <string>

void	byPtr(std::string *str)
{
	*str += " and ponies";
}

void	byConstPtr(std::string const *str) // const means cannot change the value of str inside the function
{
	std::cout << *str << std::endl; // printf the string
	std::cout << str << std::endl; // prints the memory address
}

void	byRef(std::string &str)
{
	str += " and ponies";
}

void	byConstRef(std::string const &str) // const means cannot change the value of str inside the function
{
	std::cout << str << std::endl;
}


int	main( void )
{
	std::string	str = "I like butterflies";

	byPtr(&str);
	byConstPtr(&str);

	str = "I like otters";

	byRef(str);
	byConstRef(str);

	return 0;
}