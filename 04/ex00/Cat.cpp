/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:27:01 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/09 11:39:20 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat()
{
	std::cout << "Cat constructor is called" << std::endl;
	this->Animal::_type = "cat";
}

Cat::Cat(const Cat& src) : Animal()
{
	std::cout << "Cat copy constructor is called" << std::endl;
	*this = src;
}

Cat& Cat::operator=(const Cat& src)
{
	std::cout << "Cat copy assignment is called" << std::endl;
	if (this != &src)
		this->Animal::_type = src.getType();
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "miaou";
}
