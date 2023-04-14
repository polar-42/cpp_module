/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:29:14 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/14 13:14:42 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MateriaSource.hpp>

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource & src)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = src;
}

MateriaSource& MateriaSource::operator=(const MateriaSource & src)
{
	std::cout << "MateriaSource copy assignement called" << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_materias[i])
				delete _materias[i];
			if (src._materias[i])
				_materias[i] = src._materias[i]->clone();
			else
				_materias[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete _materias[i];
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_materias[i])
		{
			_materias[i] = m;
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
		return (new Cure());
	else
		return (NULL);
}
