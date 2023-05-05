/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:20:41 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/28 11:48:27 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# include <list>

template<class T>
class MutantStack : public std::stack<T>
{

	public:
		typedef typename std::deque<T>::iterator iterator;

		MutantStack() {}
		MutantStack(const MutantStack& src) : std::stack<T>() { *this = src; }
		MutantStack& operator=(const MutantStack& src) {
			if (this != &src) { this->c = src.c ; }
			return (*this); }
		~MutantStack() {}


		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
};


#endif
