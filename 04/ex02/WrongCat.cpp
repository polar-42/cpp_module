/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:46:40 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/09 11:42:15 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor is called" << std::endl;
	this->WrongAnimal::_type = "wrong cat";
}

WrongCat::WrongCat(const WrongCat & src) : WrongAnimal()
{
	std::cout << "WrongCat copy constructor is called" << std::endl;
	*this = src;
}

WrongCat& WrongCat::operator=(const WrongCat & src)
{
	std::cout << "WrongCat copy assignment is called" << std::endl;
	if (this != &src)
		this->WrongAnimal::_type = src.WrongAnimal::_type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}
