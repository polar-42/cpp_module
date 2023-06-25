/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:21:29 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/06/20 13:31:53 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AForm.hpp>

AForm::AForm() : _name("no_name"), _signed(false), _gradeToSign(1), _gradeToExecute(1) {}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name),
	_signed(0), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {}

AForm::AForm(const AForm &src) : _name(src.getName()), _signed(false),
	_gradeToSign(src.getGradeToSign()), _gradeToExecute(getGradeToExecute()) {}

AForm& AForm::operator=(const AForm &src)
{
	if (this != &src)
	{
		_signed = src.isSigned();
	}
	return (*this);
}

AForm::~AForm() {}

const std::string AForm::getName() const
{
	return (_name);
}

int AForm::getGradeToSign() const
{
	return (_gradeToSign);
}

int AForm::getGradeToExecute() const
{
	return (_gradeToExecute);
}

bool AForm::isSigned() const
{
	return (_signed);
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > getGradeToSign())
		throw AForm::GradeTooLowException();
	else
		_signed = true;
}

std::ostream & operator<<(std::ostream &i, AForm const &src)
{
	i << src.getName() << " is a Aform, his grade to be sign is " << src.getGradeToSign()
		<< " and his grade to be execute is " << src.getGradeToExecute() << std::endl;
	return (i);
}
