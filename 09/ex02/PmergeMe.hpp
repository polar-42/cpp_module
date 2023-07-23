/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 13:06:28 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/06/27 09:37:15 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
#include <sys/time.h>
#include <ctime>

class PmergeMe
{
	private:
		std::vector<long int>	_arg;
		std::vector<long int>	_vector;
		std::deque<long int>	_deque;
		clock_t 		_timeVector;
		clock_t 		_timeDeque;

		void _sort(void);

	public:
		PmergeMe();
		PmergeMe(char **argv);
		PmergeMe(const PmergeMe& src);
		PmergeMe& operator=(const PmergeMe& src);
		~PmergeMe();

		void showResult(void);
};

#endif
