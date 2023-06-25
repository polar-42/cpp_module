/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:46:09 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/06/19 12:13:39 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RobotomyRequestForm.hpp>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm",
	72, 45), _target("no_target") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) :
	AForm("RobotomyRequestForm", 72, 45), _target(target) {}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) :
	AForm("RobotomyRequestForm", 72, 45), _target(src.getTarget()) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	if (this != &src)
	{
		_signed = src.isSigned();
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

const std::string RobotomyRequestForm::getTarget() const
{
	return (_target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (isSigned() == false)
		throw AForm::FormIsNotSigned();
	else if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
	else if (isSigned() == true)
	{
		srand(time(NULL));
		if (rand() % 2 == 0)
			std::cout << getTarget() << " has been robotomized successfully" << std::endl;
		else
			std::cout << getTarget() << " has not been robotomized" << std::endl;
	}
}
