/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:11:17 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/06/25 09:30:15 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

Span::Span() : _maxSize(0) {}

Span::Span(unsigned int n) : _maxSize(n) {}

Span::Span(const Span& src)
{
	*this = src;
}

Span& Span::operator=(const Span &src)
{
	if (this != &src)
	{
		_span = src._span;
		_maxSize = src._maxSize;
	}
	return (*this);
}

Span::~Span() {}

void	Span::addNumber(int n)
{
	if (_span.size() + 1 > _maxSize)
		throw std::exception();
	_span.push_back(n);
}

void	Span::addNumbers(int n, int i)
{
	if (_span.size() + n > _maxSize)
		throw std::exception();
	for (int y = 0; y < n; y++)
	{
		_span.push_back(i);
	}
}

unsigned int	Span::shortestSpan()
{
	if (_span.size() < 2)
		throw std::exception();

	unsigned int span = 2147483647;
	std::sort(_span.begin(), _span.end());
	for (std::vector<int>::iterator it = _span.begin(); it != _span.end(); it++)
	{
		if ((it + 1) != _span.end() && static_cast<unsigned int>((*(it + 1) - *it)) < span)
			span = static_cast<unsigned int>((*(it + 1) - *it));
	}
	return (span);
}

unsigned int	Span::longestSpan()
{
	if (_span.size() < 2)
		throw std::exception();

	return (*(std::max_element(_span.begin(), _span.end())) - *(std::min_element(_span.begin(), _span.end())));
}

