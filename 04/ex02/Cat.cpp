/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:27:01 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/03/22 16:04:26 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat()
{
	std::cout << "Cat constructor is called" << std::endl;
	this->Animal::_type = "cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat& src) : Animal()
{
	std::cout << "Cat copy constructor is called" << std::endl;
	this->Animal::_type = src.getType();
	this->_brain = new Brain(*src._brain);
}

Cat& Cat::operator=(const Cat& src)
{
	std::cout << "Cat copy assignment is called" << std::endl;
	if (this != &src)
	{
		this->Animal::_type = src.Animal::_type;
		this->_brain = new Brain(*src._brain);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

void Cat::makeSound() const
{
	std::cout << "miaou";
}
