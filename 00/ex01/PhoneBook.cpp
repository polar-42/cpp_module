/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:37:12 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/09 15:52:54 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::updateSize(int index)
{
	this->_sizePhoneBook = index;
}

static void	printTenChar(std::string str, int size)
{
	while (str.length() > 9)
		str.erase(str.length() - 1);
	if (str.length() == 9)
	{
		std::cout << str << ".";
		size--;
	}
	else
	{
		int i = str.length();
		while (i < size)
		{
			std::cout << " ";
			i++;
		}
		std::cout << str;
	}
}

void	PhoneBook::printContacts()
{
	std::cout << " ______________________________________________ " << std::endl;
	std::cout << "| Index | First name | Last  name | Nick  Name |" << std::endl;
	for (int i = 0; i < this->_sizePhoneBook; i++)
	{
		std::cout << "|     " << this->_contacts[i].getIndex();
		std::cout << " | ";
		printTenChar(this->_contacts[i].getFirstName(), 10);
		std::cout << " | ";
		printTenChar(this->_contacts[i].getLastName(), 10);
		std::cout << " | ";
		printTenChar(this->_contacts[i].getNickname(), 10);
		std::cout << " |" << std::endl;
	}
	std::cout << "|_______|____________|____________|____________|" << std::endl;
}

void	PhoneBook::searchContact()
{
	std::string	research;

	if (this->_sizePhoneBook == 0)
	{
		std::cout << "PhoneBook is empty" << std::endl;
		return ;
	}
	this->printContacts();
	std::cout << "Which one do you prefer: ";
	std::getline(std::cin, research);
	if (atoi(research.c_str()) > this->_sizePhoneBook || atoi(research.c_str()) < 0)
	{
		std::cout << "This is not a valid index" << std::endl;
		return ;
	}
	for (int i = 0; i < this->_sizePhoneBook; i++)
	{
		if (this->_contacts[i].getIndex() == atoi(research.c_str()))
		{
			this->_contacts[i].printContact();
			return ;
		}
	}
}

void	PhoneBook::addContact()
{
	if (this->_sizePhoneBook < 8)
	{
		this->_contacts[this->_sizePhoneBook].createContact(this->_sizePhoneBook);
		this->_sizePhoneBook++;
	}
	else
		this->_contacts[0].createContact(0);
}
