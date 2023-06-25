/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 13:12:52 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/05/06 11:28:44 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PmergeMe.hpp>

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(char **argv)
{
	for (int i = 1; argv[i]; i++)
	{
		long int y = atol(argv[i]);
		if (y < 0)
		{
			std::cout << "One arg is negative" << std::endl;
			throw std::exception();
		}
		if (y > 2147483647)
		{
			std::cout << "One arg is bigger than the max int" << std::endl;
			throw std::exception();
		}
		_arg.push_back(static_cast<int>(y));
	}
}

PmergeMe::PmergeMe(const PmergeMe& src) { *this = src; }

PmergeMe& PmergeMe::operator=(const PmergeMe& src)
{
	if (this != &src)
	{
		_arg = src._arg;
		_vector = src._vector;
		_list = src._list;
	}
	return (*this);
}

PmergeMe::~PmergeMe() {}

//void PmergeMe::_sortVector(void)
//{
//	for (long unsigned int i = 0; i < _arg.size(); i++)
//		_vector.push_back(_arg[i]);

//	std::vector<long int> tmpVector;
//	std::vector<long int> tmpVector2;

//	for (long unsigned int i = 0; i + 1 < _vector.size(); i += 2)
//	{
//		if (i + 1 < _vector.size() && _vector[i] > _vector[i + 1])
//		{
//			tmpVector.push_back(_vector[i]);
//			tmpVector2.push_back(_vector[i + 1]);
//		}
//		else
//		{
//			tmpVector.push_back(_vector[i + 1]);
//			tmpVector2.push_back(_vector[i]);
//		}
//	}
//	if (_vector.size() % 2 == 1)
//		tmpVector.push_back(_vector.back());

//	std::sort(tmpVector.begin(), tmpVector.end());
//	std::sort(tmpVector2.begin(), tmpVector2.end());

//	std::merge(tmpVector.begin(), tmpVector.end(), tmpVector2.begin(),
//		tmpVector2.end(), _vector.begin());
//}

static std::vector<int> sortVector(std::vector<int> arg)
{
	if (arg.size() > 2)
	{
		std::vector<int> tmp = arg;
		for (long unsigned int i = 0; i < arg.size() / 2; i++)
			tmp.pop_back();
		tmp = sortVector(tmp);
	}
	else
		std::sort(arg.begin(), arg.end());

	std::vector<int> mainChain;
	mainChain.push_back(arg[0]);
	std::sort(mainChain.begin(), mainChain.end());

	long unsigned int i = 0;
	for (std::vector<int>::iterator it = mainChain.begin(); it < mainChain.end(); it++)
	{
		while (arg[1] > *it && it < mainChain.end())
			it++;
		mainChain.insert(it, arg[1]);
		i++;
		it = mainChain.begin();
		for (long unsigned int y = 0; y < i; y++)
			it++;
	}

	return (arg);
}

//void PmergeMe::_sortList(void)
//{
//	for (long unsigned int i = 0; i < _arg.size(); i++)
//		_list.push_back(_arg[i]);

//	std::list<long int> tmpList;
//	std::list<long int> tmpList2;
//	long unsigned int	i = 0;

//	for (std::list<long int>::iterator it = _list.begin(); i + 1 < _list.size(); it++)
//	{
//		std::list<long int>::iterator ite = it;
//		ite++;
//		if (ite != _list.end() && *it > *ite)
//		{
//			tmpList.push_back(*it);
//			tmpList2.push_back(*ite);
//		}
//		else
//		{
//			tmpList.push_back(*ite);
//			tmpList2.push_back(*it);
//		}
//		it++;
//		i += 2;
//	}

//	if (_list.size() % 2 == 1)
//		tmpList.push_back(_list.back());

//	tmpList.sort();
//	tmpList2.sort();

//	tmpList.merge(tmpList2);
//	_list = tmpList;
//}

void PmergeMe::_sort(void)
{
	//struct timespec ts;
	//timespec_get(&ts, TIME_UTC);

	//timespec_get(&ts, TIME_UTC);
	//unsigned long int time = ts.tv_nsec;
	_vector = sortVector(_arg);
	//timespec_get(&ts, TIME_UTC);
	//_timeVector = ts.tv_nsec - time;
	//time = ts.tv_nsec;
	//_sortList();
	//timespec_get(&ts, TIME_UTC);
	//_timeList = ts.tv_nsec - time;
}

//static void printTime(double time)
//{
//	if (time < 1000)
//		std::cout << time / 1 << " ns" << std::endl;
//	else if (time > 1000)
//		std::cout << time / 1000 << " μs" << std::endl;
//	else if (time > 1000000)
//		std::cout << time / 1000000 << " ms" << std::endl;
//}

void PmergeMe::showResult(void)
{
	//long unsigned int i;

	//std::cout << "Before: ";
	//for (i = 0; i < _arg.size() && i < 4; i++)
	//{
	//	std::cout << _arg[i];
	//	if (i + 1 < _arg.size())
	//		std::cout << " ";
	//}
	//if (_arg.size() > 4)
	//	std::cout << "[...]";
	//std::cout << std::endl;

	_sort();

	std::cout << "After: ";
	for (long unsigned int i = 0; i < _vector.size(); i++)
	{
		std::cout << _vector[i];
		if (i + 1 < _vector.size())
			std::cout << " ";
	}
	//if (_vector.size() > 4)
	//	std::cout << "[...]";
	//std::cout << std::endl;
	//std::cout << "Time to process a range of " << _arg.size() << " elements with std::vector : ";
	//printTime(static_cast<float>(_timeVector));
	//std::cout << "Time to process a range of " << _arg.size() << " elements with std::list : ";
	//printTime(static_cast<float>(_timeList));
}
