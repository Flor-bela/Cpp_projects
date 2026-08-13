/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 13:35:17 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/13 21:18:03 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

// forbidden: std::string::replace
// filestreams
int		main(int argc, char **argv) //??? the same as in C?
{
	if (argc != 4)
	{
		std::cerr << "Wrong argument number, usage: <filename> <string1> <string2>" << std::endl;
		return 1;
	}
	
	std::ifstream	ifs(argv[1]); // comprobar que argv[1] es una string que puedo usar???
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::string		buffer;

	if (ifs.good())
	{
		std::string		ofs_name; // creating a new output file: create it only if I find s1???
		ofs_name = argv[1];
		ofs_name.append(".replace");
		std::ofstream	ofs(ofs_name.c_str()); // en esta versión de C++ (98) solo acepta punteros a caracteres (const char *) -> c_str() extrae el const char * del string 
		if ( !ofs.good())
		{
			std::cerr << "Error: outfile not created" << std::endl;
			return 1;
		}
		
		size_t			pos;
		
		while (getline(ifs, buffer))
		{
			pos = 0;
			while ((pos = buffer.find(s1, pos)) != std::string::npos)
			{
				buffer.erase(pos, s1.length());
				buffer.insert(pos, s2);
				pos += s2.length(); // muy importante para no generar un bucle infinito!!!
			}
			ofs << buffer;
			if (!ifs.eof()) // si no es end of file añadir salto de línea.
				ofs << std::endl;
		}
		ofs.close();
		ifs.close();
	}
	else
	{
		std::cerr << "Error reading the file" << std::endl;
		return 1;
	}
	return 0;
}
