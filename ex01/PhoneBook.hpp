/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 17:50:08 by fda-roch          #+#    #+#             */
/*   Updated: 2026/07/15 20:35:47 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();

		void	add_contact();
		void	print_contacts() const;
		void	filter_index() const;

	private:
		int	current_index;
		int	total_contacts;
		Contact	contacts[8];
};

#endif