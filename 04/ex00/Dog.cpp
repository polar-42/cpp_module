/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:27:01 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/09 11:39:08 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor is called" << std::endl;
	this->Animal::_type = "dog";
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Dog copy constructor is called" << std::endl;
	*this = src;
}

Dog& Dog::operator=(const Dog &src)
{
	std::cout << "Dog copy assignment is called" << std::endl;
	if (this != &src)
		this->Animal::_type = src.Animal::_type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "woaf";
}
