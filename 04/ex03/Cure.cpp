/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:11:14 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/14 13:04:16 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cure.hpp>

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure constructor is called" << std::endl;
}

Cure::Cure(const Cure &src) : AMateria("cure")
{
	std::cout << "Cure copy constructor is called" << std::endl;
	*this = src;
}

Cure& Cure::operator=(const Cure &src)
{
	std::cout << "Cure copy assignement constructor is called" << std::endl;
	if (this != &src)
	{
		(std::string)_type = "cure";
	}
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure destructor is called" << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
