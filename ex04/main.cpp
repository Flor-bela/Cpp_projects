/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 13:35:17 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/11 23:59:45 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

// forbidden: std::string::replace
// filestreams
int		main(int argc, char **argv) //?
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
	
/* 	int	i;
	int	j;
	
	i = 0;
	j = 0; */
	if (ifs.good())
	{
		//std::streambuf *pbuf = ifs.rdbuf();  //cual la diferencia entre std::streambuf y el filebuf??
		//std::streamsize	size = pbuf->in_avail(); // cuantos characteres tiene dentro
	
	//	ifs.getline(buffer, size); // cannot do this??
		//char c; ifs >> c;
		//std::cout << "first character in file: " << c << std::endl;
		//std::cout << size << std::endl;
		
		
		/* while (pbuf)
		{
			//if (pbuf[i] == s1[j]) // no puedo hacer esto, son distintos tipos, no los puedo comparar
			std::cout << pbuf << std::endl;
			pbuf++; //se puede??? es como un puntero??
		} */
		/* int	i;

		i = 0; */
		size_t	pos;
		std::string		ofs_name;
		std::string		tmp;
		
		ofs_name = argv[1];
		ofs_name.append(".replace");
		std::ofstream	ofs(ofs_name.c_str()); // en esta versión de C++ (98) solo acepta punteros a caracteres (const char *) -> c_str() extrae el const char * del string 
		
		while (getline(ifs, buffer))
		{
			pos = buffer.find(s1);
			std::cout << "pos is " << pos << std::endl;
			if (pos != std::string::npos) // maybe put a limit here for std::string::npos
			{
				//if (s1.length() > s2.length())
				//pos = pos + s1.length(); // para el insert??? 
				//pos+= s1.length();
				buffer.insert(pos, s2); // simplemente lo añade sin quitar lo que había // nah no puedo usar esta. Tengo que ver otra opcion!!!
				std::cout << buffer << std::endl;
			}
			ofs << buffer << std::endl; // cuidado con el salto de línea!!!!!!!!!!!!
			//buffer.clear(); // can I use this? do I need to do it? with getline it probably erases it? or increments buffer every loop? I think it substitutes it
		// creating a new output file: create it only if I find s1??)
		}
		ofs.close();
	}
	else
		std::cerr << "Error reading the file" << std::endl;


	ifs.close();
	
	// open filename -> copy its contents to filename.replace -> and replace s1 with s2
	
	
	
	return 0;
}