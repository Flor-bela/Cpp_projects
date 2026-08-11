/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 19:13:27 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/11 13:30:01 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp" // this one is inside the other too, should I still declare it here? Yes! IWYU (Include What You USE!!!)

int		main ( void )
{
	{
		Weapon	club = Weapon("crude spiked club");
		
		HumanA	bob("Bob", club); // but I pass club as a variable... how can it take its reference? ahh! if it was a pointer, I would need to send &club, but since it is a reference, it is just like that, the name....
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon	club = Weapon("crude spiked club");
		
		HumanB	jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}