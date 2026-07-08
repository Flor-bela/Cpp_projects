#include <iostream>

//Confirmar que puedo usar std::cout!
int	main(int argc, char **argv)
{
	//char	buffer[1024];
	int	i;

	i = 1;
	//std::cin.getline(buffer, 1024);
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	while (argv[i] != NULL)
	{
		std::cout << argv[i] << " "; // convertirlo aquí todo a mayusculas!!!
		i++;
	}
	std::cout << std::endl;
	return (0);
}

