#include <fstream>
#include <iostream>
#include <cstdlib>

int		main ( void )
{
	// Crear el archivo
	std::ofstream	ofs("hola.txt");
	ofs << "mar y mar" << std::endl;
	ofs << "una línea normal" << std::endl;
	ofs << "marmota" << std::endl;
	ofs.close();

	//----------------------------------------
	std::string	exec = "./replace";

	std::cout << "--- TEST 1: Reemplazo normal (mar -> marea) ---" << std::endl;
	std::cout << "\033[33m" << std::flush;
	std::system((exec + " hola.txt mar marea").c_str()); // de nuevo tengo que poner c_str() para sacer const char* porque esta versión de system (la de c++98) necesita que sea dado así
	std::cout << "\033[0m" << std::flush;
	std::system("cat hola.txt.replace");
	std::cout << std::endl;

	std::cout << "--- TEST 2: Reemplazo recursivo (mar -> marmota) ---" << std::endl;
	std::cout << "\033[33m" << std::flush;
	std::system((exec + " hola.txt mar marmota").c_str());
	std::cout << "\033[0m" << std::flush;
	std::system("cat hola.txt.replace");
	std::cout << std::endl;

	std::cout << "--- TEST 3: Faltan argumentos ---" << std::endl;
	std::cout << "\033[33m" << std::flush;
	std::system((exec + " hola.txt marmota").c_str());
	std::cout << "\033[0m" << std::flush;
	std::system("cat hola.txt.replace");
	std::cout << std::endl;

	std::cout << "--- TEST 4: String1 is empty ---" << std::endl;
	std::cout << "\033[33m" << std::flush;
	std::system((exec + " hola.txt "" marmota").c_str());
	std::cout << "\033[0m" << std::flush;
	std::system("cat hola.txt.replace");
	std::cout << std::endl;

	std::cout << "--- TEST 5: String2 is empty, should work by removing the string1 ---" << std::endl;
	std::cout << "\033[33m" << std::flush;
	std::system((exec + " hola.txt 'mar' ''").c_str());
	std::cout << "\033[0m" << std::flush;
	std::system("cat hola.txt.replace");
	std::cout << std::endl;

	std::cout << "--- TEST 6: Archivo inexistente ---" << std::endl;
	std::cout << "\033[33m" << std::flush;
	std::system((exec + " noExiste.txt mar marmota").c_str());
	std::cout << "\033[0m" << std::flush;
	std::system("cat hola.txt.replace");
	std::cout << std::endl;

	std::cout << "--- TEST 7: Archivo no tiene permisos --" << std::endl;
	std::system("chmod 000 hola.txt");
	std::cout << "\033[33m" << std::flush;
	std::system((exec + " hola.txt mar marmota").c_str());
	std::cout << "\033[0m" << std::flush;
	std::system("cat hola.txt.replace");
	std::cout << std::endl;
	std::system("chmod 777 hola.txt");

	// delete files!
	std::system("rm hola.txt");
	std::system("rm hola.txt.replace");

	return 0;
}

