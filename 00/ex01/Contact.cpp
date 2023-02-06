/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:41:20 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/03 16:54:27 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	Contact::getFirstName()
{
	return (this->firstName);
}

std::string	Contact::getLastName()
{
	return (this->lastName);
}

std::string	Contact::getNickname()
{
	return (this->nickname);
}

std::string	Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}

std::string	Contact::getSecret()
{
	return (this->secret);
}

void	Contact::printHeigtChar(std::string str, int size)
{
	while (str.length() > 8)
		str.pop_back();
	if (str.length() == 8)
	{
		std::cout << str << ".";
		size--;
	}
	else
		std::cout << str;
	int i = str.length();
	while (i < size)
	{
		std::cout << " ";
		i++;
	}
}

void	Contact::printContact()
{
	std::cout << "_____________________________________________________________________" << std::endl;
	std::cout << "| First name | Last name | Nickname | Phone number | Darkest secret |" << std::endl;
	{
		std::cout << "| ";
		printHeigtChar(getFirstName(), 10);
		std::cout << " | ";
		printHeigtChar(getLastName(), 9);
		std::cout << " | ";
		printHeigtChar(getNickname(), 8);
		std::cout << " | ";
		printHeigtChar(getPhoneNumber(), 12);
		std::cout << " | ";
		printHeigtChar(getSecret(), 14);
		std::cout << " |" << std::endl;
	}
	std::cout << "⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺" << std::endl;
}

void	Contact::createContact()
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	secret;

	std::cout << "Enter the first name: ";
	std::getline(std::cin, firstName);
	this->firstName = firstName;
	std::cout << "Enter the last name: ";
	std::getline(std::cin, lastName);
	this->lastName = lastName;
	std::cout << "Enter the nickname: ";
	std::getline(std::cin, nickname);
	this->nickname = nickname;
	std::cout << "Enter the phone number: ";
	std::getline(std::cin, phoneNumber);
	this->phoneNumber = phoneNumber;
	std::cout << "Enter the darkest secret: ";
	std::getline(std::cin, secret);
	this->secret = secret;
}