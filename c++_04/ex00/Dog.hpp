/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 13:23:36 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/10 18:04:39 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog( void );
		Dog( Dog const & src );
		~Dog( void );

		Dog&			operator=( Dog const & src );
		virtual void	makeSound( void ) const;	// como la tengo que cambiar la tengo que declarar aqui tambien

};

#endif
