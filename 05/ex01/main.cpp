/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:58:48 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/06/19 15:54:52 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <Form.hpp>

int	main(void)
{
	{
		try
		{
			Bureaucrat *a = new Bureaucrat("Bill", 50);
			Form *b = new Form("Form_one", 100, 75);

			a->signForm(*b);
			a->signForm(*b);

			delete a;
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
			Bureaucrat *a = new Bureaucrat("Bill", 50);
			Form *b = new Form("Form_two", 45, 75);

			a->signForm(*b);

			delete a;
			delete b;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}
