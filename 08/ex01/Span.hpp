/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:03:50 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/06/24 11:30:31 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <cstdlib>
#include <algorithm>

class Span
{
	private:
		std::vector<int>	_span;
		unsigned int	_maxSize;


	public:
		Span();
		Span(unsigned int n);
		Span(const Span& src);
		Span& operator=(const Span &src);
		~Span();

		void	addNumber(int n);
		void	addNumbers(int n, int i);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
};

#endif
