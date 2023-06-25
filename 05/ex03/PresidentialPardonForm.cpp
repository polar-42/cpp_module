/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:46:09 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/06/19 12:22:25 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PresidentialPardonForm.hpp>

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm",
	25, 5), _target("no_target") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) :
	AForm("PresidentialPardonForm", 25, 5), _target(target) {}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) :
	AForm("PresidentialPardonForm", 25, 5), _target(src.getTarget()) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	if (this != &src)
	{
		_signed = src.isSigned();
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

const std::string PresidentialPardonForm::getTarget() const
{
	return (_target);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (isSigned() == false)
		throw AForm::FormIsNotSigned();
	else if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
	else if (isSigned() == true)
		std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
