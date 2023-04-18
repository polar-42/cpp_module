/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:00:04 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/18 15:02:29 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

Bureaucrat::Bureaucrat() : _name("no_name"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	if (grade < 1)
			throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src.getName())
{
	*this = src;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this != &src)
		_grade = src.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat() {}

void	Bureaucrat::operator++()
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::operator--()
{
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooLowException();
}

std::string Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

void Bureaucrat::signForm(Form& form)
{
	if (form.isSigned() == 1)
		std::cout << getName() << " signed " << form.getName() << std::endl;
	if (form.isSigned() == 0)
	{
		std::cout << getName() << " couldn't sign " << form.getName() <<
		" because " << std::endl;
		if (form.getGradeToSign() > getGrade())
			std::cout << "grade is too low" << std::endl;
	}
}

std::ostream & operator<<(std::ostream &i, Bureaucrat const &src)
{
	i << src.getName() << ", bureaucrat grade " << src.getGrade();
	return (i);
}
