/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:12:56 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/11 23:50:33 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain
{
	public:
		Brain( void );
		Brain( Brain const & src );
		~Brain( void );

		Brain&	operator=( Brain const & src );

		std::string	getIdea( int index ) const;
		void		setIdea( int index, std::string const & idea );

	private:
		std::string	ideas[100];

};

#endif