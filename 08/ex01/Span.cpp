/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:11:17 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/27 16:31:57 by fle-tolg         ###   ########.fr       */
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
	_span.assign(n, i);
}

unsigned int	Span::shortestSpan()
{
	if (_span.size() < 2)
		throw std::exception();

	unsigned int span = 2147483647;
	for (int i = 0; static_cast<size_t>(i) < _span.size(); i++)
	{
		for (int y = i + 1; static_cast<size_t>(y) < _span.size(); y++)
		{
			if (_span.at(i) > _span.at(y))
			{
				if ((_span.at(i) - _span.at(y)) < static_cast<int>(span))
					span = _span.at(i) - _span.at(y);
			}
			else
				if ((_span.at(y) - _span.at(i)) < static_cast<int>(span))
					span = _span.at(y) - _span.at(i);
		}
	}
	return (span);
}

unsigned int	Span::longestSpan()
{
	if (_span.size() < 2)
		throw std::exception();

	int	max = -2147483647;
	for (int i = 0; static_cast<size_t>(i) < _span.size(); i++)
	{
		if (_span.at(i) > max)
			max = _span.at(i);
	}
	int	min = 2147483647;
	for (int i = 0; static_cast<size_t>(i) < _span.size(); i++)
	{
		if (_span.at(i) < min)
			min = _span.at(i);
	}
	return static_cast<unsigned int>(max - min);
}

