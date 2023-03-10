/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:29:14 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/28 16:46:12 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MateriaSource.hpp>

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource & materiaSource)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	this->_type = materiaSource._type;
}

MateriaSource& MateriaSource::operator=(const MateriaSource & materiaSource)
{
	std::cout << "MateriaSource copy assignement called" << std::endl;
	if (this != &materiaSource)
		this->_type = materiaSource._type;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
}