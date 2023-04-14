/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:27:01 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/09 14:34:05 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog() : Animal(), _brain(NULL)
{
	std::cout << "Dog constructor is called" << std::endl;
	this->Animal::_type = "dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &src) : Animal(src), _brain(NULL)
{
	std::cout << "Dog copy constructor is called" << std::endl;
	*this = src;
}

Dog& Dog::operator=(const Dog &src)
{
	std::cout << "Dog copy assignment is called" << std::endl;
	if (this != &src)
	{
		this->Animal::_type = src.Animal::_type;
		delete this->_brain;
		this->_brain = new Brain(*src._brain);
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

void	Dog::makeSound() const
{
	std::cout << "woaf";
}

void	Dog::setIdea(const std::string idea, const int n)
{
	_brain->setIdea(idea, n);
}

const std::string	Dog::getIdea(const int n)
{
	return (_brain->getIdea(n));
}
