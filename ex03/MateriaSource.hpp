/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 11:31:36 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/16 17:33:37 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include <string>

class AMateria;

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource( void );
		MateriaSource( MateriaSource const & src ); // ??
		~MateriaSource( void );

		MateriaSource& operator=( MateriaSource const & src ); // ??
	
		virtual void		learnMateria( AMateria* m );
		virtual AMateria*	createMateria( std::string const & type );

	private:
		AMateria*	_inventory[4]; // hice esto pero ... AMateria no puede ser instanciada... es abstracta, pero sí que puedo crear punteros a una clase abstracta

};


#endif