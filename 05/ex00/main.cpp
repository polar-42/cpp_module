/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:58:48 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/24 14:06:53 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

int	main(void)
{
	{
		Bureaucrat *bureaucrat = new Bureaucrat("Bill", 50);

		std::cout << *bureaucrat << std::endl;

		delete bureaucrat;
	}
	std::cout << std::endl;
	{
		try
		{
			Bureaucrat a = Bureaucrat("Bill", 250);
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			Bureaucrat a = Bureaucrat("Bill", -250);
		}
		catch (Bureaucrat::GradeTooLowException &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			Bureaucrat a = Bureaucrat("Bill", 50);
			std::cout << a << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}
