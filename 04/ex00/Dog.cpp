/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:27:01 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/27 15:40:01 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog()
{
	std::cout << "Dog constructor is called" << std::endl;
	this->Animal::_type = "dog";
}

Dog::Dog(const Dog & dog)
{
	std::cout << "Dog copy constructor is called" << std::endl;
	this->Animal::_type = dog.Animal::_type;
}

Dog& Dog::operator=(const Dog & dog)
{
	std::cout << "Dog copy assignment is called" << std::endl;
	if (this != &dog)
		this->Animal::_type = dog.Animal::_type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}
