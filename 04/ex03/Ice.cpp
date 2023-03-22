/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:11:06 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/03/22 16:30:12 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Ice.hpp>

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice constructor is called" << std::endl;
}

Ice::Ice(const Ice& src) : AMateria("ice")
{
	std::cout << "Ice copy constructor is called" << std::endl;
}

Ice &Ice::operator=(const Ice& src)
{
	std::cout << "Ice copy assignement constructor is called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice destructor is called" << std::endl;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
