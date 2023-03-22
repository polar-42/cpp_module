/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:11:14 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/03/22 16:29:59 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cure.hpp>

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure constructor is called" << std::endl;
}

Cure::Cure(const Cure& src) : AMateria("Cure")
{
	std::cout << "Cure copy constructor is called" << std::endl;
}

Cure &Cure::operator=(const Cure& src)
{
	std::cout << "Cure copy assignement constructor is called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure destructor is called" << std::endl;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
