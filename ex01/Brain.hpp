/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:12:56 by fda-roch          #+#    #+#             */
/*   Updated: 2026/09/10 19:49:34 by fda-roch         ###   ########.fr       */
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

		std::string	ideas[100]; // con new? o no? y public? o private?
	
};

#endif