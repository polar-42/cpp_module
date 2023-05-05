/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:04:33 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/05/01 15:35:13 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.hpp>
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <ShrubberyCreationForm.hpp>

Intern::Intern() {}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern& Intern::operator=(const Intern &src)
{
	(void)src;
	return (*this);
}

Intern::~Intern() {}

AForm* Intern::makeForm(std::string name, std::string target)
{
	std::string	forms[3] = {"presidential pardon", "robotomy request",
		"shrubbery creation"};

	char c;
	for (int i = 0; i < 4; i++)
	{
		if (name == forms[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			c = forms[i][0];
		}
	}
	switch (c)
	{
		case 'p':
			return (new PresidentialPardonForm(target));
		case 'r':
			return (new RobotomyRequestForm(target));
		case 's':
			return (new ShrubberyCreationForm(target));
	}
	std::cout << "The form " << name << " doesn't exist" << std::endl;
	return (NULL);
}
