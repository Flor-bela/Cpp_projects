/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 12:59:01 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/11 23:48:10 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
	public:
		Animal( void );									// default constructor
		Animal( Animal const & src );					// copy constructor
		virtual ~Animal( void );						// destructor

		Animal& 		operator=(Animal const & src);	// operator= asignation
		std::string		getType( void ) const;
		
		virtual void	makeSound( void ) const;	// esta debe ser virtual mas adelante! porque todos van a tener que definir su propia versión y un animal tal cual no debería hacer sound...o sea este va a ser un pure method?

	protected:
		std::string	type;
};

#endif
