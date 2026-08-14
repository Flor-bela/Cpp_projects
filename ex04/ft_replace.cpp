/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 14:24:58 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/14 16:33:21 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void	ft_replace(std::ifstream &ifs, std::string s1, std::string s2, std::ofstream &ofs)
{
	std::string		buffer;
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
		if (!ifs.eof())
			ofs << std::endl;
	}
}
