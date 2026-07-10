#include <iostream>
#include "Sample_const.hpp"

int	main(void)
{
	SampleConst	object(3.14);
	object.bar(); // need to add this here to execute the function declared inside the class! If not it won´t run!

	return (0);
}