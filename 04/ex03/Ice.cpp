/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:11:06 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/14 13:04:18 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Ice.hpp>

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice constructor is called" << std::endl;
}

Ice::Ice(const Ice &src) : AMateria("Ice")
{
	std::cout << "Ice copy constructor is called" << std::endl;
	*this = src;
}

Ice& Ice::operator=(const Ice &src)
{
	std::cout << "Ice copy assignement constructor is called" << std::endl;
	if (this != &src)
	{
		(std::string)_type = "ice";
	}
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructor is called" << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
