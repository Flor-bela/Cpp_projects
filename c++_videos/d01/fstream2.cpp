// Not from the videos, just practice

#include <iostream>
#include <fstream>

int	main ( void )
{
	std::ifstream	ifs("file.txt"); // input stream
	std::string		myText; // buffer
	
	while (getline(ifs, myText))
	{
		std::cout << myText << std::endl;
	}
	ifs.close(); // parece que con valgrind --track-fds=yes sigue apareciendo que solo tengo
	return 0;
}

