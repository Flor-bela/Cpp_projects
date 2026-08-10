/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 17:34:46 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/10 17:40:46 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int		main( void )
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	// they should all be the same!
	std::cout << &str << std::endl; // memory address of the string variable
	std::cout << stringPTR << std::endl; // memory address held by stringPTR
	std::cout << &stringREF << std::endl; // memory address held by stringREF
	
	// ----------------------
	// they should all be the same!
	std::cout << str << std::endl; // value of the string variable
	std::cout << *stringPTR << std::endl; // value pointed to by stringPTR
	std::cout << stringREF << std::endl; // value pointed to by stringREF

	return 0;
}