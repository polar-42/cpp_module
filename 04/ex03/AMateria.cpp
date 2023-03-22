/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:12:47 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/03/22 15:21:57 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AMateria.hpp>

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &src)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	_type = src.getType();
}

AMateria& AMateria::operator=(AMateria const &src)
{
	std::cout << "AMateria copy assignement constructor called" << std::endl;
	if (*this != &src)
	{
		_type = src.getType();
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

AMateria* AMateria::clone()
{
	//??
}
void AMateria::use(ICharacter& target)
{
	std::cout << getType() << " is use on " << target << std::endl;
}
