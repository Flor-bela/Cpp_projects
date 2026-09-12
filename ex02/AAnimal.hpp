/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 12:59:01 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/12 18:26:14 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <string>

class AAnimal
{
	public:
		AAnimal( void );
		AAnimal( AAnimal const & src );
		virtual ~AAnimal( void );

		AAnimal& 		operator=( AAnimal const & src );
		std::string		getType( void ) const;
		
		virtual void	makeSound( void ) const = 0;
		
	protected:
		std::string	type;
};

#endif
