/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 10:36:07 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/05/01 16:36:20 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Base.hpp>
#include <A.hpp>
#include <B.hpp>
#include <C.hpp>

Base::~Base() {}

Base* Base::generate(void)
{
	srand(time(NULL));
	int r = rand() % 10;

	if (r >= 7)
		return (new A());
	else if (r >= 4)
		return (new B());
	else
		return (new C());
}

void Base::identify(Base *p)
{
	if (this == dynamic_cast<A*>(p))
		std::cout << "A";
	else if (this == dynamic_cast<B*>(p))
		std::cout << "B";
	else if (this == dynamic_cast<C*>(p))
		std::cout << "C";
}

void Base::identify(Base &p)
{
	if (this == dynamic_cast<A*>(&p))
		std::cout << "A";
	else if (dynamic_cast<B*>(&p))
		std::cout << "B";
	else if (dynamic_cast<C*>(&p))
		std::cout << "C";
}

