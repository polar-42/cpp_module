/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:56:10 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/28 16:46:21 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <IMateriaSource.hpp>

IMateriaSource::IMateriaSource() : MateriaSource()
{
	std::cout << "IMateriaSource constructor called" << std::endl;
	this->_type = "";
}

IMateriaSource::IMateriaSource(const IMateriaSource & iMateriaSource)
{
	std::cout << "IMateriaSource copy constructor called" << std::endl;
	this->_type = iMateriaSource._type;
}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource & iMateriaSource)
{
	std::cout << "IMateriaSource copy assignement called" << std::endl;
	if (this != &iMateriaSource)
		this->_type = iMateriaSource._type;
	return (*this);
}

IMateriaSource::~IMateriaSource()
{
	std::cout << "IMateriaSource destructor called" << std::endl;
}

void	MateriaSource::learnMateria()
{
	std::cout << "learnMateria called" << std::endl;
}
