/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:21:29 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/18 15:02:59 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Form.hpp>

Form::Form() : _name("no_name"), _signed(false), _gradeToSign(1), _gradeToExecute(1) {}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name),
	_signed(0), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {}

Form::Form(const Form &src) : _name(src.getName()), _signed(false),
	_gradeToSign(src.getGradeToSign()), _gradeToExecute(getGradeToExecute()) {}

Form& Form::operator=(const Form &src)
{
	if (this != &src)
	{
		_signed = src.isSigned();
	}
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
	if (bureaucrat.getGrade() >= getGradeToSign())
		throw Form::GradeTooLowException();
	_signed = true;
	bureaucrat.signForm(*this);
}
