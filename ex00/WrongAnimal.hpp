/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:15:47 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/10 17:40:40 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
	public:
		WrongAnimal( void );
		WrongAnimal( WrongAnimal const & src );
		~WrongAnimal( void ); // aquí no tengo que poner virtual porque no tengo nada virtual no??

		WrongAnimal& operator=( WrongAnimal const & src );
		
		std::string	getType( void ) const;
		void		makeSound( void ) const; // no lo pongo virtual
		
	protected:
		std::string	type;
};

#endif