/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:37:12 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/03 15:38:42 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::updateSize(int index)
{
	this->sizePhoneBook = index;
}

void	PhoneBook::searchContact()
{
	std::string	research;

	std::cout << "Write the first name of the person you search: ";
	std::getline(std::cin, research);
	int i ;
	for (i = 0; i < this->sizePhoneBook; i++)
	{
		if (this->contacts[i].getFirstName() == research)
		{
			this->contacts[i].printContact();
			return ;
		}
	}
	std::cout << "This person isn't in your phone book" << std::endl;
}

void	PhoneBook::addContact()
{
	if (this->sizePhoneBook < 8)
		this->contacts[this->sizePhoneBook].createContact();
	else
		this->contacts[0].createContact();
	this->sizePhoneBook++;
}
