/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 15:26:32 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/11 23:11:25 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Cat: public Animal
{
	public:
		Cat( void );
		Cat( Cat const & src );
		~Cat( void );

		Cat&	operator=( Cat const & src );
		virtual void	makeSound( void ) const;
		
		std::string	getIdea( int index ) const;
		void		setIdea( int index , std::string idea );
	
	private:
		Brain*	_brain;

};


#endif