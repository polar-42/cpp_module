/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:12:47 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/14 13:04:38 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AMateria.hpp>

AMateria::AMateria() : _type((std::string&)"no type")
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &src) : _type(src.getType())
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
}

AMateria& AMateria::operator=(AMateria const &src)
{
	std::cout << "AMateria copy assignement constructor called" << std::endl;
	if (this != &src)
	{
		(std::string)_type = src.getType();
	}
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

const std::string& AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria is use on " << target.getName() << std::endl;
}
