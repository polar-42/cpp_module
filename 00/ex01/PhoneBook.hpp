/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:00:34 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/03 15:37:59 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <cctype>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		sizePhoneBook;

	public:
		void	addContact();
		void	searchContact();
		void	updateSize(int num);
};


#endif