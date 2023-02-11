/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:00:34 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/09 15:43:00 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <cctype>
# include <cstring>
# include <cstdlib>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	_contacts[8];
		void	printContacts();
		int		_sizePhoneBook;

	public:
		void	addContact();
		void	searchContact();
		void	updateSize(int num);
};


#endif
