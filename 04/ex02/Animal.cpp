/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:07:48 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/27 16:00:22 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
	this->_type = "random animal";
}

Animal::Animal(const Animal & animal)
{
	std::cout << "Animal copy constructor called, this is a " << animal._type << std::endl;
	this->_type = animal._type;
}

Animal & Animal::operator=(const Animal & animal)
{
	std::cout << "Animal copy assignement called, this is a " << animal._type << std::endl;
	if (this != &animal)
		this->_type = animal._type;
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
	if (this->_type == "cat")
		std::cout << "meow";
	else if (this->_type == "dog")
		std::cout << "ouaf";
	else
		std::cout << "nothing I'm an random animal";
}