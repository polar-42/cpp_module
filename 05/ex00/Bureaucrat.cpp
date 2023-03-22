/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:00:04 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/03/20 14:33:14 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	try
	{
		if (grade > 150)
			throw ((std::string)"grade superior to 150");
		if (grade < 1)
			throw ((std::string)"grade inferior to 1");
	}
	catch(std::string error)
	{
		std::cerr << error << std::endl;
	}
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src.getName()) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this != &src)
		(std::string)_name = src.getName();
	return (*this);
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat & Bureaucrat::operator++()
{
	try
	{
		if (_grade + 1 > 150)
			throw ((std::string)"grade superior to 150");
	}
	catch(std::string error)
	{
		std::cerr << error << std::endl;
		return (*this);
	}
	_grade++;
	return (*this);
}

Bureaucrat & Bureaucrat::operator--()
{
	try
	{
		if (_grade - 1 < 1)
			throw ((std::string)"grade inferior to 1");
	}
	catch(std::string error)
	{
		std::cerr << error << std::endl;
		return (*this);
	}
	_grade--;
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

std::ostream & operator<<(std::ostream &i, Bureaucrat const &src)
{
	i << src.getName() << ", bureaucrat grade " << src.getGrade();
	return (i);
}
