/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 10:36:07 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/06/21 11:46:38 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Base.hpp>
#include <A.hpp>
#include <B.hpp>
#include <C.hpp>

Base::Base() {}

Base::~Base() {}

Base* Base::generate(void)
{
	srand(time(NULL));
	int r = rand() % 3;

	if (r  == 0)
	{
		std::cout << "A is generate" << std::endl;
		return (new A());
	}
	else if (r == 1)
	{
		std::cout << "B is generate" << std::endl;
		return (new B());
	}
	else if (r == 2)
	{
		std::cout << "C is generate" << std::endl;
		return (new C());
	}
	return (NULL);
}

void Base::identify(Base *p)
{
	if (!p)
		std::cout << "NULL";
	else if (this == dynamic_cast<A*>(p))
		std::cout << "A";
	else if (this == dynamic_cast<B*>(p))
		std::cout << "B";
	else if (this == dynamic_cast<C*>(p))
		std::cout << "C";
}

void Base::identify(Base &p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
			std::cout << "A";
		(void)a;
	}
	catch (std::exception& e) {}

	try
	{
		B& a = dynamic_cast<B&>(p);
			std::cout << "B";
		(void)a;
	}
	catch (std::exception& e) {}

	try
	{
		C& a = dynamic_cast<C&>(p);
			std::cout << "C";
		(void)a;
	}
	catch (std::exception& e) {}
}

