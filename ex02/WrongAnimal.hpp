/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:15:47 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/12 18:13:22 by fda-roch         ###   ########.fr       */
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
		~WrongAnimal( void );

		WrongAnimal& operator=( WrongAnimal const & src );
		
		std::string	getType( void ) const;
		void		makeSound( void ) const;
		
	protected:
		std::string	type;
};

#endif