/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:41:20 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/18 15:00:06 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	Contact::getFirstName()
{
	return (this->_firstName);
}

std::string	Contact::getLastName()
{
	return (this->_lastName);
}

std::string	Contact::getNickname()
{
	return (this->_nickname);
}

std::string	Contact::getPhoneNumber()
{
	return (this->_phoneNumber);
}

std::string	Contact::getSecret()
{
	return (this->_secret);
}

int	Contact::getIndex()
{
	return (this->_index + 1);
}

void	Contact::printContact()
{
	std::cout << "First name: " << getFirstName() << std::endl;
	std::cout << "Last name: " << getLastName() << std::endl;
	std::cout << "Nickname: " << getNickname() << std::endl;
	std::cout << "Phone number: " << getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << getSecret() << std::endl;
}

void	Contact::createContact(int index)
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	secret;

	while (firstName.length() == 0)
	{
		std::cout << "Enter the first name: ";
		std::getline(std::cin, firstName);
		this->_firstName = firstName;
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(1);
		}
		if (firstName.length() == 0)
			std::cout << "Field can't be empty" << std::endl;
	}
	while (lastName.length() == 0)
	{
		std::cout << "Enter the last name: ";
		std::getline(std::cin, lastName);
		this->_lastName = lastName;
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(1);
		}
		if (lastName.length() == 0)
			std::cout << "Field can't be empty" << std::endl;
	}
	while (nickname.length() == 0)
	{
		std::cout << "Enter the nickname: ";
		std::getline(std::cin, nickname);
		this->_nickname = nickname;
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(1);
		}
		if (nickname.length() == 0)
			std::cout << "Field can't be empty" << std::endl;
	}
	while (phoneNumber.length() == 0)
	{
		std::cout << "Enter the phone number: ";
		std::getline(std::cin, phoneNumber);
		this->_phoneNumber = phoneNumber;
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(1);
		}
		if (phoneNumber.length() == 0)
			std::cout << "Field can't be empty" << std::endl;
	}
	while (secret.length() == 0)
	{
		std::cout << "Enter the darkest secret: ";
		std::getline(std::cin, secret);
		this->_secret = secret;
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(1);
		}
		if (secret.length() == 0)
			std::cout << "Field can't be empty" << std::endl;
	}
	this->_index = index;
}
