/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:25:06 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/28 15:22:27 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MutantStack.hpp>

int main()
{
	{
		std::cout << "Test with MutantStack " << std::endl;
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << "mstack.top() = " <<  mstack.top() << std::endl;
		std::cout << "mstack.size() = " << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		std::cout << std::endl;
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		int i = 0;
		while (it != ite)
		{
			std::cout << "it at " << i << " = " << *it << std::endl;
			++it;
			i++;
		}
		std::stack<int> s(mstack);
	}
	std::cout << std::endl;
	{
		std::cout << "Test with std::list: " << std::endl;
		std::list<int> mstack;

		mstack.push_back(5);
		mstack.push_back(17);

		std::cout << "mstack.top() = " <<  mstack.back() << std::endl;
		std::cout << "mstack.size() = " << mstack.size() << std::endl;

		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);

		std::cout << std::endl;
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();

		++it;
		--it;
		int i = 0;
		while (it != ite)
		{
			std::cout << "it at " << i << " = " << *it << std::endl;
			++it;
			i++;
		}
		std::list<int> s(mstack);
	}
	std::cout << std::endl;
	{
		std::cout << "Test copy constructor:" << std::endl;
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int> mstackCpy = mstack;

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		MutantStack<int>::iterator itCpy = mstack.begin();

		++it;
		--it;
		++itCpy;
		--itCpy;
		int i = 0;
		while (it != ite)
		{
			std::cout << "it at " << i << " =\t" << *it << std::endl;
			std::cout << "itCpy at " << i << " =\t" << *itCpy << std::endl;
			++it;
			++itCpy;
			i++;
			if (it != ite)
				std::cout << std::endl;
		}
		std::stack<int> s(mstack);
	}
	return (0);
}
