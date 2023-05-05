/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:01:23 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/05/02 16:22:41 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <BitcoinExchange.hpp>

void BitcoinExchange::_getValueDB(void)
{
	std::ifstream	inputFile;
	inputFile.open("data.csv", std::ifstream::in);
	if (inputFile.is_open() == false)
	{
		std::cerr << "data.csv cannot be open" << std::endl;
		throw std::exception();
	}

	std::string str;
	std::string str1;
	getline(inputFile, str);
	if (str.find("date") == (size_t)-1 || str.find(",") == (size_t)-1
		|| str.find("exchange") == (size_t)-1)
		throw std::exception();
	while (getline(inputFile, str, ','))
	{
		getline(inputFile, str1);
		_dataBase.insert(std::pair<std::string, float>(str, atof(str1.c_str())));
	}
}

BitcoinExchange::BitcoinExchange() : _inputFile("no_input")
{
	_getValueDB();
}

BitcoinExchange::BitcoinExchange(std::string file) : _inputFile(file)
{
	_getValueDB();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& src) { *this = src; }

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& src)
{
	if (this != &src)
	{
		_inputFile = src._inputFile;
		_dataBase = src._dataBase;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

static bool testDate(std::string date)
{
	std::string tmpDate = date;
	int year = 0;
	int month = 0;
	int day = 0;

	if (tmpDate.length() > 0)
		year = atoi(strtok((char*)tmpDate.c_str(), "-"));
	else
	{
		std::cout << date << " => Error in the date" << std::endl;
		return (false);
	}
	tmpDate.erase(0, 5);
	if (tmpDate.length() > 0)
		month = atoi(strtok((char*)tmpDate.c_str(), "-"));
	else
	{
		std::cout << date << " => Error in the date" << std::endl;
		return (false);
	}
	tmpDate.erase(0, 3);
	if (tmpDate.length() > 0)
		day = atoi(strtok((char*)tmpDate.c_str(), "-"));
	else
	{
		std::cout << date << " => Error in the date" << std::endl;
		return (false);
	}

	if (year <= 2009 && month <= 1 && day < 3)
	{
		std::cout << date << " => Satoshi Nakamoto didn't git push" << std::endl;
		return (false);
	}
	if (year > 2023 || year < 2009)
	{
		std::cout << date << " => Date isn't valid" << std::endl;
		return (false);
	}
	if (month > 12 || month < 1)
	{
		std::cout << date << " => Date isn't valid" << std::endl;
		return (false);
	}
	if (day < 0 || day > 31 || ((month == 4 || month == 6 || month == 9 || month == 11)
		&& day > 30) || (year % 4 == 0 && month == 2 && day > 29) || (year % 4 != 0
		&& month == 2 && day > 28))
	{
		std::cout << date << " => Date isn't valid" << std::endl;
		return (false);
	}
	return (true);
}

void BitcoinExchange::_getClosestDate(std::string str, std::string n)
{
	if (testDate(str) == false)
		return ;
	else if (n.length() == 0)
	{
		std::cout << str << " => no price" << std::endl;
		return ;
	}
	else if (atof(n.c_str()) < 0)
	{
		std::cout << str << " => " << atof(n.c_str()) <<
			" = Error: not a positive number" << std::endl;
		return ;
	}
	else if (atof(n.c_str()) > 1000)
	{
		std::cout << str << " => " << atol(n.c_str()) <<
			" = Error: too large number" << std::endl;
		return ;
	}

	std::multimap<std::string, float>::iterator it = _dataBase.begin();

	while (it != _dataBase.end())
	{
		if (it->first >= str)
		{
			std::cout << str << " => " << atof(n.c_str()) << " = "
				<< static_cast<double>((atof(n.c_str()) * it->second)) << std::endl;
			return ;
		}
		it++;
	}
}

void BitcoinExchange::displayTransaction(void)
{
	std::ifstream	inputFile;
	inputFile.open(_inputFile.c_str(), std::ifstream::in);
	if (inputFile.is_open() == false)
	{
		std::cerr << _inputFile << " cannot be open" << std::endl;
		throw std::exception();
	}

	std::string str;
	std::string str1;
	std::string tmp;
	getline(inputFile, str);
	if (str.find("date") == (size_t)-1 || str.find("|") == (size_t)-1
		|| str.find("value") == (size_t)-1)
	{
		std::cerr << "error, invalid input" << std::endl;
		throw std::exception();
	}
	while (getline(inputFile, str))
	{
		if (str.length() == 0)
			std::cout << "One line is missing" << std::endl;
		else
		{
			tmp = strtok((char *)str.c_str(), "|");
			if (tmp == str)
				std::cout << str << " => Bad input" << std::endl;
			else
			{
				str1 = str.erase(0, tmp.length() + 1);
				if (tmp.at(tmp.length() - 1) == ' ')
					tmp.erase(tmp.length() - 1, 1);
				_getClosestDate(tmp, str);
			}
		}
	}
}
