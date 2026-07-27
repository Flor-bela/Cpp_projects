#include <iostream> // for standard input and output

int	main(void)
{
	char	buff[100];

	std::cout << "Hello World" << std::endl; // este tiene \n (con std::endl)
	std::cout << "Input : "; // este no lo tiene

	//std::cin >> buff;
	//std::cout << "The word you wrote is: [" << buff << ']' << std::endl; //solo estoy pudiendo escribir una palabra! Porqué si el buffer es de 100?
	// nota: solo puedo imprimir una palabra porque el simbolo >> para de leer cuando encuentra un espacio!!!
	// si quisiera leer más (hasta un newline), debería usar std::cin.getline()
	
	std::cin.getline(buff, 100);
	std::cout << "The complete sentence you wrote is: [" << buff << ']' << std::endl;

	return (0);
}