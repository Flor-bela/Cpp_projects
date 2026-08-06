#include <iostream>
#include <fstream>

int		main( void )
{
	std::ifstream	ifs("numbers.txt"); // numbers es el nombre del fichero que quiero que lea
	unsigned int	dst;
	unsigned int	dst2;

	ifs >> dst >> dst2; // Estos valores es los coge del fichero numbers

	std::cout << dst << " " << dst2 << std::endl;
	ifs.close();

	// ----------------------

	std::ofstream	ofs("output.txt"); // como quiero que se llama el fichero que va a crear
	ofs << "I like butterflies" << std::endl;
	ofs.close();

	return 0;
}

