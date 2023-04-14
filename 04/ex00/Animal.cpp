/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:07:48 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/09 11:41:48 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
	this->_type = "random animal";
}

Animal::Animal(const Animal & src)
{
	std::cout << "Animal copy constructor called, this is a " << src._type << std::endl;
		*this = src;
}

Animal & Animal::operator=(const Animal & src)
{
	std::cout << "Animal copy assignement called, this is a " << src._type << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound() const
{
	std::cout << "??? (sorry I'm an random animal)";
}
