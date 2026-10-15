#include "Sample2.hpp"
#include <iostream>

// Este método es lo que se llama initialization list! -> Usar este en vez de inicializar como está hecho en Sample1!
Sample2::Sample2(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
	std::cout << "Contructor called Sample2!" << std::endl;

	std::cout << "a1 from Sample 2 is " << a1 << std::endl;
	std::cout << "a2 from Sample 2 is " << a2 << std::endl;
	std::cout << "a3 from Sample 2 is " << a3 << std::endl;
}

Sample2::~Sample2(void)
{
	std::cout << "Destructor called!" << std::endl;
}
