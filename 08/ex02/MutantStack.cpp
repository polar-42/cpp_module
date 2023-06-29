/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 12:06:34 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/06/25 09:31:42 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MutantStack.hpp>


MutantStack::MutantStack() {}

MutantStack::MutantStack(const MutantStack& src) : std::stack<T>()
{
	*this = src;
}

MutantStack::MutantStack& operator=(const MutantStack& src)
{
	if (this != &src)
	{
		this->c = src.c;
	}
	return (*this);
}

MutantStack::~MutantStack() {}

MutantStack::iterator begin()
{
	return this->c.begin();
}

MutantStack::iterator end()
{
	return this->c.end();
}
