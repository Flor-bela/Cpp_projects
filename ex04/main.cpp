/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 13:35:17 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/14 16:34:53 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

bool	check_args(int argc)
{
	if (argc != 4)
	{
		std::cerr << "Wrong argument number, usage: <filename> <string1> <string2>" << std::endl;
		return false;
	}
	return true;
}

// forbidden: std::string::replace
// filestreams
int		main(int argc, char **argv)
{
	if (!check_args(argc))
		return 1;

	// s1
	std::string		s1 = argv[2];
	if (s1.empty())
	{
		std::cerr << "Error: <string1> is empty" << std::endl;
		return 1;
	}
	std::string		s2 = argv[3];
	
	// input file
	std::ifstream	ifs(argv[1]);
	if (!ifs.is_open())
	{
		std::cerr << "Error opening the input file" << std::endl;
		return 1;
	}
	
	// output file
	std::string		ofs_name = std::string(argv[1]) + ".replace";
	std::ofstream	ofs(ofs_name.c_str()); // en esta versión de C++ (98) solo acepta punteros a caracteres (const char *) -> c_str() extrae el const char * del string 
	if (!ofs.is_open())
	{
		std::cerr << "Error: output file not created" << std::endl;
		return 1;
	}

	ft_replace(ifs, s1, s2, ofs);
	ofs.close();
	ifs.close();
	
	return 0;
}

