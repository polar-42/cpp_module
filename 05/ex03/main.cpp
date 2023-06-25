/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:58:48 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/06/19 09:36:39 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <AForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <ShrubberyCreationForm.hpp>
#include <Intern.hpp>

int	main(void)
{
    {
        Intern *intern = new Intern();
        Bureaucrat *b = new Bureaucrat("Bill", 3);
        AForm *form = intern->makeForm("robotomy request", "Lolo");

        if (form)
        {
            b->signForm(*form);
            b->executeForm(*form);
            delete form;
        }

        delete intern;
        delete b;
    }
    std::cout << std::endl;
    {
        Intern *intern = new Intern();
        Bureaucrat *b = new Bureaucrat("Bill", 3);
        AForm *form = intern->makeForm("presidential pardon", "Coco");

        if (form)
        {
            b->signForm(*form);
            b->executeForm(*form);
            delete form;
        }

        delete intern;
        delete b;
    }
    std::cout << std::endl;
    {
        Intern *intern = new Intern();
        Bureaucrat *b = new Bureaucrat("Bill", 3);
        AForm *form = intern->makeForm("shrubbery creation", "Toto");

        if (form)
        {
            b->signForm(*form);
            b->executeForm(*form);
            delete form;
        }

        delete intern;
        delete b;
    }
    std::cout << std::endl;
    {
        Intern *intern = new Intern();
        Bureaucrat *b = new Bureaucrat("Bill", 3);
        AForm *form = intern->makeForm("no_form", "Toto");

        if (form)
        {
            b->signForm(*form);
            b->executeForm(*form);
            delete form;
        }

        delete intern;
        delete b;
    }
}
