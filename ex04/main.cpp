/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 13:35:17 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/11 16:52:16 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

// forbidden: std::string::replace
// filestreams
int		main(int argc, char **argv) //???
{
	if (argc != 4)
		return 1;
	std::ifstream	ifs(argv[1]);

	if (ifs.good())
	{
		std::streambuf *pbuf = ifs.rdbuf();  //cual la diferencia entre std::streambuf y el filebuf??
		char c; ifs >> c;
		std::streamsize	size = pbuf->in_avail(); // cuantos characteres tiene dentro
		std::cout << "first character in file: " << c << std::endl;
		std::cout << size << " characters in buffer after it" << std::endl;
	}
	else
		std::cout << "No file" << std::endl;
	
	ifs.close();
	
	

	
	// is it this way for c++??
	// open filename -> copy its contents to filename.replace -> and replace s1 with s2
	
	//std::ofstream	ofs("replace"); //filename.replace
	
	return 0;
}