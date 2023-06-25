/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:21:29 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/06/20 13:30:55 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Form.hpp>

Form::Form() : _name("no_name"), _signed(false), _gradeToSign(1), _gradeToExecute(1) {}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name),
	_signed(0), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (_gradeToExecute > 150 || _gradeToSign > 150)
		throw Form::GradeTooLowException();
	else if (_gradeToExecute < 1 || _gradeToSign < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form &src) : _name(src.getName()), _signed(false),
	_gradeToSign(src.getGradeToSign()), _gradeToExecute(getGradeToExecute())
{
	if (_gradeToExecute > 150 || _gradeToSign > 150)
		throw Form::GradeTooLowException();
	else if (_gradeToExecute < 1 || _gradeToSign < 1)
		throw Form::GradeTooHighException();
	*this = src;
}

Form& Form::operator=(const Form &src)
{
	if (this != &src)
		_signed = src.isSigned();
	return (*this);
}

Form::~Form() {}

const std::string Form::getName() const
{
	return (_name);
}

int Form::getGradeToSign() const
{
	return (_gradeToSign);
}

int Form::getGradeToExecute() const
{
	return (_gradeToExecute);
}

bool Form::isSigned() const
{
	return (_signed);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > getGradeToSign())
		throw Form::GradeTooHighException();
	else if (_signed == true)
		throw Form::FormIsAlreadySign();
	else
		_signed = true;
}

std::ostream & operator<<(std::ostream &i, Form const &src)
{
	i << src.getName() << " is a form, his grade to be sign is " << src.getGradeToSign()
		<< " and his grade to be execute is " << src.getGradeToExecute() << std::endl;
	return (i);
}
