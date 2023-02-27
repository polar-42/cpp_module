/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:27:01 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/27 15:40:01 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat()
{
	std::cout << "Cat constructor is called" << std::endl;
	this->Animal::_type = "cat";
}

Cat::Cat(const Cat & cat)
{
	std::cout << "Cat copy constructor is called" << std::endl;
	this->Animal::_type = cat.Animal::_type;
}

Cat& Cat::operator=(const Cat & cat)
{
	std::cout << "Cat copy assignment is called" << std::endl;
	if (this != &cat)
		this->Animal::_type = cat.Animal::_type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}
