#include "Sample_adhoc.hpp"
#include <iostream>

int		main( void )
{
	Sample_AdHoc	sample;
	Sample_AdHoc	sample_2;

	sample.bar('c'); // remember that to be only a char it needs to be inside single quotes '' not double ones ""
	sample.bar(42);
	//sample.bar(3.24); // this is a double literal, not a float; The compiler does not know whether to convert the double to an int or a float
	sample.bar(3.24f); //this way it knows it is a float;
	sample.bar(sample_2);

	return 0;
}