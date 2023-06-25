/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:58:48 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/06/19 12:20:00 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <AForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <ShrubberyCreationForm.hpp>

int	main(void)
{
    {
        try
        {
            AForm *form = new PresidentialPardonForm("Lolo");
            Bureaucrat *b = new Bureaucrat("Bill", 3);

            b->signForm(*form);
            b->executeForm(*form);

            delete form;
            delete b;
        }
        catch(Bureaucrat::GradeTooHighException& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    std::cout << std::endl;
    {
        try
        {
            AForm *form = new RobotomyRequestForm("Lolo");
            Bureaucrat *b = new Bureaucrat("Bill", 3);

            b->signForm(*form);
            b->executeForm(*form);

            delete form;
            delete b;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    std::cout << std::endl;
    {
        try
        {
            AForm *form = new ShrubberyCreationForm("Polo");
            Bureaucrat *b = new Bureaucrat("Bill", 3);

            b->signForm(*form);
            b->executeForm(*form);

            delete form;
            delete b;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    std::cout << std::endl;
    {
        try
        {
            AForm *form = new PresidentialPardonForm("Polo");
            Bureaucrat *b = new Bureaucrat("Bill", 150);

            b->signForm(*form);

            delete form;
            delete b;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    std::cout << std::endl;
    {
        try
        {
            AForm *form = new RobotomyRequestForm("Polo");
            Bureaucrat *b = new Bureaucrat("Bill", 149);

            b->signForm(*form);

            delete form;
            delete b;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    std::cout << std::endl;
    {
        try
        {
            Bureaucrat b = Bureaucrat("Bill", 3);

            b.executeForm(ShrubberyCreationForm("Polo"));
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
}
