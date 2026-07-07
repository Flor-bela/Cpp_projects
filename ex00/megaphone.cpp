#include <iostream>

//Confirmar que puedo usar std::cout!
int	main(int argc, char **argv)
{
	//char	buffer[1024];

	//std::cin.getline(buffer, 1024);
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	if (argv[1] != NULL && argv[1] != '\0')
		std::cout << argv[1] << std::endl; // convertirlo aquí todo a mayusculas!!!

	return (0);
}

