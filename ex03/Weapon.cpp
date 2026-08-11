/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 18:30:48 by fda-roch          #+#    #+#             */
/*   Updated: 2026/08/11 12:40:56 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon ( std::string Type ) : type(Type) // más eficiente con initializer list
{
}

Weapon::~Weapon ( void )
{
}

const std::string&	Weapon::getType( void ) // así no da error al compilar con el orden const y despues &
{
	return this->type; // para devolver una referencia solo tengo que devolver la variable
}

void	Weapon::setType( std::string str )
{
	// should I control in case they str is NULL? No, std::string es un objeto de la biblioteca estándar, no es un puntero de C (char *). Un std::string nunca puede ser NULL. Puede ser una cadena vacía (""), pero no romperá el programa.
	type = str;
	return ;
}


