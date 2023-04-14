/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:42:13 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/27 15:43:19 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->_type = "random WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal & src)
{
	std::cout << "WrongAnimal copy constructor called, this is a " << src._type << std::endl;
	*this = src;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & src)
{
	std::cout << "WrongAnimal copy assignement called, this is a " << src._type << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "??? (sorry I'm an random animal)";
}
