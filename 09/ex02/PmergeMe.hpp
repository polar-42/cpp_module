/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 13:06:28 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/05/01 14:58:35 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <list>
# include <vector>
# include <algorithm>

class PmergeMe
{
	private:
		std::vector<long int>	_arg;
		std::vector<long int>	_vector;
		std::list<long int>		_list;
		unsigned long int 		_timeVector;
		unsigned long int 		_timeList;

		void _sort(void);
		void _sortVector(void);
		void _sortList(void);

	public:
		PmergeMe();
		PmergeMe(char **argv);
		PmergeMe(const PmergeMe& src);
		PmergeMe& operator=(const PmergeMe& src);
		~PmergeMe();

		void showResult(void);
};

#endif
