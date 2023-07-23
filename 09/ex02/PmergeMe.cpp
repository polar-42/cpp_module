/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 13:12:52 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/06/30 08:53:16 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PmergeMe.hpp>

static bool checkArg(std::string str)
{
	if (str.empty())
		return (false);
	bool isNumber = false;
	for (int i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]) && str[i] != ' ')
			return (false);
		else if (isdigit(str[i]))
			isNumber = true;
	}
	return (isNumber);
}

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
		else if (y > 2147483647)
		{
			std::cout << "One arg is bigger than the max int" << std::endl;
			throw std::exception();
		}
		else if (checkArg(argv[i]) == false)
		{
			std::cout << "Only digit accepted" << std::endl;
			throw std::exception();
		}
		_arg.push_back(y);
		_vector.push_back(y);
		_deque.push_back(y);
	}
}

PmergeMe::PmergeMe(const PmergeMe& src)
{
	*this = src;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& src)
{
	if (this != &src)
	{
		_arg = src._arg;
		_vector = src._vector;
		_deque = src._deque;
	}
	return (*this);
}

PmergeMe::~PmergeMe() {}

static std::vector<long int> sortVectorPairs(std::vector<long int> vector, long int size)
{
	if (size <= 1)
		return (vector);
	vector = sortVectorPairs(vector, size - 1);

	long int val = vector[size - 1];
	long int pos = size - 2;

	while (pos >= 0 && vector[pos] > val)
	{
		vector[pos + 1] = vector[pos];
		pos = pos - 1;
	}
	vector[pos + 1] = val;
	return (vector);
}

static std::vector<long int> insertNumVector(std::vector<long int> vector, long int num)
{
	for (std::vector<long int>::iterator it = vector.begin(); it < vector.end(); it++)
	{
		if (*it > num)
		{
			vector.insert(it, num);
			return (vector);
		}
		else if (*it == *(vector.end() - 1))
		{
			vector.push_back(num);
			return (vector);
		}
	}
	return (vector);
}

static std::vector<long int> sortVector(std::vector<long int> vector)
{
	long int lastOdd;
	bool isOdd = false;
	std::vector<long int> mainChain;
	if (vector.size() == 1)
		return (vector);
	if (vector.size() % 2 != 0)
	{
		lastOdd = *(vector.end() - 1);
		isOdd = true;
		vector.pop_back();
	}
	for (long unsigned int i = 0; i < vector.size(); i += 2)
	{
		if (vector[i] > vector[i + 1])
			std::swap(vector[i], vector[i + 1]);
	}

	for (long unsigned int i = 1; i < vector.size(); i += 2)
		mainChain.push_back(vector[i]);

	mainChain = sortVectorPairs(mainChain, mainChain.size());

	for (std::vector<long int>::iterator it = vector.begin(); it < vector.end(); it += 2)
		mainChain = insertNumVector(mainChain, *it);
	if (isOdd == true)
		mainChain = insertNumVector(mainChain, lastOdd);

	return (mainChain);
}

static std::deque<long int> sortDequePairs(std::deque<long int> deque, long int size)
{
	if (size <= 1)
		return (deque);
	deque = sortDequePairs(deque, size - 1);

	long int val = deque[size - 1];
	long int pos = size - 2;

	while (pos >= 0 && deque[pos] > val)
	{
		deque[pos + 1] = deque[pos];
		pos = pos - 1;
	}
	deque[pos + 1] = val;
	return (deque);
}

static std::deque<long int> insertNumDeque(std::deque<long int> deque, long int num)
{
	for (std::deque<long int>::iterator it = deque.begin(); it < deque.end(); it++)
	{
		if (*it > num)
		{
			deque.insert(it, num);
			return (deque);
		}
		else if (*it == *(deque.end() - 1))
		{
			deque.push_back(num);
			return (deque);
		}
	}
	return (deque);
}

static std::deque<long int> sortDeque(std::deque<long int> deque)
{
	long int lastOdd;
	bool isOdd = false;
	std::deque<long int> mainChain;

	if (deque.size() == 1)
		return (deque);
	if (deque.size() % 2 != 0)
	{
		lastOdd = *(deque.end() - 1);
		isOdd = true;
		deque.pop_back();
	}
	for (long unsigned int i = 0; i < deque.size(); i += 2)
	{
		if (deque[i] > deque[i + 1])
			std::swap(deque[i], deque[i + 1]);
	}

	for (long unsigned int i = 1; i < deque.size(); i += 2)
		mainChain.push_back(deque[i]);

	mainChain = sortDequePairs(mainChain, mainChain.size());

	for (std::deque<long int>::iterator it = deque.begin(); it < deque.end(); it += 2)
		mainChain = insertNumDeque(mainChain, *it);
	if (isOdd == true)
		mainChain = insertNumDeque(mainChain, lastOdd);

	return (mainChain);
}

void PmergeMe::_sort(void)
{
	clock_t time = clock();

	_vector = sortVector(_vector);
	_timeVector = clock() - time;

	time = clock();
	_deque = sortDeque(_deque);
	_timeDeque = clock() - time;
}

void PmergeMe::showResult(void)
{
	long unsigned int i;

	std::cout << "Before: ";
	for (i = 0; i < _arg.size() && i < 4; i++)
	{
		std::cout << _arg[i];
		if (i + 1 < _arg.size())
			std::cout << " ";
	}
	if (_arg.size() > 4)
		std::cout << "[...]";
	std::cout << std::endl;

	_sort();

	std::cout << "After: ";
	for (i = 0; i < _vector.size() && i < 4; i++)
	{
		std::cout << _vector[i];
		if (i + 1 < _vector.size())
			std::cout << " ";
	}
	if (_vector.size() > 4)
		std::cout << "[...]";
	std::cout << std::endl;

	//int y = 0;
	//for (std::vector<long int>::iterator it = _vector.begin(); it < _vector.end(); it++)
	//{
	//	if (it + 1 < _vector.end() && *it <= *(it + 1))
	//		std::cout << "";
	//	else if (it + 1 < _vector.end())
	//		y = 1;
	//}
	//if (y == 0)
	//	std::cout << "Vector OK" << std::endl;
	//else
	//	std::cout << "Vector KO" << std::endl;

	//y = 0;
	//for (std::deque<long int>::iterator it = _deque.begin(); it < _deque.end(); it++)
	//{
	//	if (it + 1 < _deque.end() && *it <= *(it + 1))
	//		std::cout << "";
	//	else if (it + 1 < _deque.end())
	//		y = 1;
	//}
	//if (y == 0)
	//	std::cout << "Deque OK" << std::endl;
	//else
	//	std::cout << "Deque KO" << std::endl;

	std::cout << "Time to process a range of " << _arg.size() << " elements with std::vector : "
		<< ((static_cast<double>(_timeVector) / CLOCKS_PER_SEC) * 1000) << " ms" << std::endl;
	std::cout << "Time to process a range of " << _arg.size() << " elements with std::deque : "
		<< ((static_cast<double>(_timeDeque) / CLOCKS_PER_SEC) * 1000) << " ms" << std::endl;
}
