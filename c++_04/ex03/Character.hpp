/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 18:20:04 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/17 16:04:42 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include <string>

class AMateria; // forward declaration

class Character: public ICharacter
{
	public: // any copy (copy constructor or copy assigment operator) must be deep!
		Character( void );
		Character( std::string  const & name ); // parameterized constructor
		Character( Character const & src ); // este va a tener que coger el inventario?? y copiar las Materias? -> delete the ones we have and then add the new ones from the Character we are copying from
		~Character( void );

		Character&	operator=( Character const & src ); // este va a tener que coger el inventario?? y copiar las Materias? -> delete the ones we have and then add the new ones from the Character we are copying from
		
		virtual std::string const &	getName() const;
		virtual void				equip( AMateria* m );
		virtual void				unequip( int idx ); // Save the addresses before calling unequip(), or anything else, // must not delete de Materia!
		virtual void				use( int idx, ICharacter& target ); // AMateria::use -> pass it to this function to use it!
	
	private:
		std::string	_name;
		AMateria*	_inventory[4]; // ?? at most 4 Materias; empty upon construction// any type of AMateria....
};
// Character va a tener un array de 4 slots para poner Materias y las puede equipar o unequip!  

// materias must be deleted when a Character is destroyed
#endif