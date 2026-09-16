/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 15:53:40 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/16 18:25:15 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
	public:
	//	(aunque sea una interface será que tengo que hacer esta clase canonica ortodoxa?) CREO QUE NO!!!
		virtual ~IMateriaSource() {};
		virtual void		learnMateria( AMateria* m ) = 0;
		virtual AMateria*	createMateria( std::string const & type ) = 0;
};

#endif