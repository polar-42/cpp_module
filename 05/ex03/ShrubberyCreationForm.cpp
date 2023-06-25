/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:46:09 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/06/19 16:00:26 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ShrubberyCreationForm.hpp>

static void createASCIITree(const std::string target);

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm",
	145, 137), _target("no_target") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) :
	AForm("ShrubberyCreationForm", 145, 137), _target(target) {}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) :
	AForm("ShrubberyCreationForm", 145, 137), _target(src.getTarget()) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	if (this != &src)
	{
		_signed = src.isSigned();
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

const std::string ShrubberyCreationForm::getTarget() const
{
	return (_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (isSigned() == false)
		throw AForm::FormIsNotSigned();
	else if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooHighException();
	else if (isSigned() == true)
	{
		createASCIITree(getTarget());
		std::cout << _target << "_shrubbery has been created" << std::endl;
	}
}

static void createASCIITree(const std::string target)
{
	std::ofstream	output;

	output.open((target + "_shrubbery").c_str(), std::ifstream::out);
	if (output.is_open() == false)
	{
		std::cout << target + "_shrubbery" << " cannot be create" << std::endl;
		return ;
	}
	output << "       A \n      l l\n     l   l\n    l     l\n   l       l\n  B         C\n l l         l\nD   E l l  l F\n     l l\n    G   H\n       l l\n      I   J \n";
}
