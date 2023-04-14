/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:05:04 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/09 13:25:25 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain & src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain & Brain::operator=(const Brain & src)
{
	std::cout << "Brain copy assignement called" << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = src._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

void	Brain::setIdea(const std::string idea, const int n)
{
	_ideas[n] = idea;
}

const std::string	Brain::getIdea(const int n)
{
	return (_ideas[n]);
}
