/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 13:35:17 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/13 18:25:01 by fda-roch         ###   ########.fr       */
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
	
	std::ifstream	ifs(argv[1]);
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::string		buffer;
	int				i = 0;

	if (ifs.good())
	{
		size_t			pos;
		std::string		ofs_name; // creating a new output file: create it only if I find s1???
		
		ofs_name = argv[1];
		ofs_name.append(".replace");
		std::ofstream	ofs(ofs_name.c_str()); // en esta versión de C++ (98) solo acepta punteros a caracteres (const char *) -> c_str() extrae el const char * del string 
		
		while (getline(ifs, buffer))
		{
			while (i < (int)buffer.length())
			{
				pos = buffer.find(s1);
				if (pos != std::string::npos) // okay I find that s1 exists....
				{
					// tengo que hacer esto varias veces hasta que no tenga ningun s1 dentro de buffer porque pueden ser varios!
					buffer.erase(pos, s1.length());
					buffer.insert(pos, s2);
				}
				i++;
			}
			ofs << buffer << std::endl;
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
