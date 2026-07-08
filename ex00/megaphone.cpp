#include <iostream>
#include <cctype>

//Confirmar que puedo usar std::cout!
int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		z;
	char	buffer[1024];

	i = 1;
	z = 0;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
 	while (argv[i] != NULL)
	{	
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] >= 97 && argv[i][j] <= 122)
				buffer[z] = std::toupper((argv[i][j]));
			else
				buffer[z] = argv[i][j];
			j++;
			z++;
		}
		i++;
	}
	// entre argumentos, contando cuantos tengo, añado espacios?? 
	buffer[z] = '\0';
	std::cout << buffer << std::endl;
	return (0);
}

