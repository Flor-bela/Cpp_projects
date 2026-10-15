/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 18:24:29 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/14 19:33:33 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int		main( void )
{
	Harl	harl;

	std::cout << "\033[32m" << " --- TEST 1: level: DEBUG ---" << "\033[0m" << std::endl;
	harl.complain("DEBUG");
	
	std::cout << "\033[32m" << " --- TEST 2: level: INFO ---" << "\033[0m" << std::endl;
	harl.complain("INFO");
	
	std::cout << "\033[32m" << " --- TEST 3: level: WARNING ---" << "\033[0m" << std::endl;
	harl.complain("WARNING");
	
	std::cout << "\033[32m" << " --- TEST 4: level: ERROR ---" << "\033[0m" << std::endl;
	harl.complain("ERROR");

	std::cout << "\033[33m" << " --- TEST 5: level: (empty) ---" << "\033[0m" << std::endl;
	harl.complain("");
	
	std::cout << "\033[33m" << " --- TEST 6: level: NotValid ---" << "\033[0m" << std::endl;
	harl.complain("NotValid");

	std::cout << "\033[33m" << " --- TEST 7: level: debug (lowercase)  ---" <<  "\033[0m" << std::endl;
	harl.complain("debug");
	
	return 0;
}
