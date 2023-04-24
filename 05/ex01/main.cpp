/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:58:48 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/18 15:16:15 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <Form.hpp>

int	main(void)
{
	{
		Bureaucrat *a = new Bureaucrat("Bill", 50);
		Form *b = new Form("Form1", 100, 75);

		b->beSigned(*a);

		delete a;
		delete b;
	}
	std::cout << std::endl;
	{
		Bureaucrat *a = new Bureaucrat("Bill", 50);
		Form *b = new Form("Form1", 45, 75);

		try
		{
			b->beSigned(*a);
		}
		catch(Form::GradeTooLowException &e)
		{
			std::cout << e.what() << std::endl;
		}
		
		delete a;
		delete b;
	}
}
