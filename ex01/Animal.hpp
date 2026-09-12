/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 12:59:01 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/12 18:12:00 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
	public:
		Animal( void );
		Animal( Animal const & src );
		virtual ~Animal( void );

		Animal& 		operator=(Animal const & src);
		std::string		getType( void ) const;
		
		virtual void	makeSound( void ) const;
	protected:
		std::string	type;
};

#endif
