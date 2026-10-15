/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <fda-roch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 13:35:17 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/31 13:37:06 by fda-roch         ###   ########.fr       */
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


int		main(int argc, char **argv)
{
	if (!check_args(argc))
		return 1;


	std::string		s1 = argv[2];
	if (s1.empty())
	{
		std::cerr << "Error: <string1> is empty" << std::endl;
		return 1;
	}
	std::string		s2 = argv[3];

	std::ifstream	ifs(argv[1]);
	if (!ifs.is_open())
	{
		std::cerr << "Error opening the input file" << std::endl;
		return 1;
	}

	std::string		ofs_name = std::string(argv[1]) + ".replace";
	std::ofstream	ofs(ofs_name.c_str());
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

