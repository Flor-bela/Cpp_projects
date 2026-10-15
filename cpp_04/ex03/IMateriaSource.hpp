/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 15:53:40 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/17 19:52:53 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
	public:
	//	(aunque sea una interface será que tengo que hacer esta clase canonica ortodoxa?) CREO QUE NO!!!
		virtual ~IMateriaSource() {}; // así con las {} ya no necesito crear un cpp solo para un destructor porque aunque sea interface lo tengo que tener?
		virtual void		learnMateria( AMateria* ) = 0; // en las declaraciones no tengo que poner un nombre en c++ pero en la implementación de la función sí!!!
		virtual AMateria*	createMateria( std::string const & type ) = 0;
};

#endif