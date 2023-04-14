/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:27:01 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/09 14:34:26 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat() : _brain(NULL)
{
	std::cout << "Cat constructor is called" << std::endl;
	this->_type = "cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat& src) : Animal(), _brain(NULL)
{
	std::cout << "Cat copy constructor is called" << std::endl;
	*this = src;
}

Cat& Cat::operator=(const Cat& src)
{
	std::cout << "Cat copy assignment is called" << std::endl;
	if (this != &src)
	{
		this->_type = src.getType();
		this->_brain = new Brain(*src._brain);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

void Cat::makeSound() const
{
	std::cout << "miaou";
}

void	Cat::setIdea(const std::string idea, const int n)
{
	_brain->setIdea(idea, n);
}

const std::string	Cat::getIdea(const int n)
{
	return (_brain->getIdea(n));
}
