/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:01:23 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/07/14 09:29:49 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <BitcoinExchange.hpp>

static bool testDate(std::string date, bool print)
{
	std::string tmpDate = date;
	int year = 0;
	int month = 0;
	int day = 0;

	if (tmpDate.length() > 0 && tmpDate[4] == '-' && isdigit(tmpDate[0])
		&& isdigit(tmpDate[1]) && isdigit(tmpDate[2]) && isdigit(tmpDate[3]))
		year = atoi(strtok((char*)tmpDate.c_str(), "-"));
	else
	{
		if (print == true)
			std::cout << date << " => Error in the date" << std::endl;
		return (false);
	}
	tmpDate.erase(0, 5);
	if (tmpDate.length() > 0 && tmpDate[2] == '-' && isdigit(tmpDate[0])
		&& isdigit(tmpDate[1]))
		month = atoi(strtok((char*)tmpDate.c_str(), "-"));
	else
	{
		if (print == true)
			std::cout << date << " => Error in the date" << std::endl;
		return (false);
	}
	tmpDate.erase(0, 3);
	if (tmpDate.length() > 0 && isdigit(tmpDate[0]) && isdigit(tmpDate[1]))
		day = atoi(strtok((char*)tmpDate.c_str(), "-"));
	else
	{
		if (print == true)
			std::cout << date << " => Error in the date" << std::endl;
		return (false);
	}

	if (year <= 2009 && month <= 1 && day < 3)
	{
		if (print == true)
			std::cout << date << " => Date isn't valid" << std::endl;
		return (false);
	}
	if (year > 2023 || year < 2009)
	{
		if (print == true)
			std::cout << date << " => Date isn't valid" << std::endl;
		return (false);
	}
	if (month > 12 || month < 1)
	{
		if (print == true)
			std::cout << date << " => Date isn't valid" << std::endl;
		return (false);
	}
	if (day <= 0 || day > 31 || ((month == 4 || month == 6 || month == 9 || month == 11)
		&& day > 30) || (year % 4 == 0 && month == 2 && day > 29) || (year % 4 != 0
		&& month == 2 && day > 28))
	{
		if (print == true)
			std::cout << date << " => Date isn't valid" << std::endl;
		return (false);
	}
	return (true);
}

void BitcoinExchange::_getValueDB(void)
{
	std::ifstream	inputFile;
	inputFile.open("data.csv", std::ifstream::in);
	if (inputFile.is_open() == false)
	{
		std::cerr << "data.csv cannot be open" << std::endl;
		throw std::exception();
	}

	std::string date;
	std::string price;
	getline(inputFile, date);
	if (date != "date,exchange_rate")
	{
		std::cerr << "Error" << std::endl << "data.csv format is invalid" << std::endl;
		throw std::exception();
	}
	while (getline(inputFile, date, ','))
	{
		getline(inputFile, price);
		if (testDate(date, false) == true && atof(price.c_str()) >= 0)
			_dataBase.insert(std::pair<std::string, float>(date, atof(price.c_str())));
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


static bool checkNumeric(std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		if (isalpha(str[i]))
			return (false);
	}
	return (true);
}

static bool checkBlank(std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && str[i] != '\t')
			return (true);
	}
	return (false);
}

void BitcoinExchange::_getClosestDate(std::string str, std::string n)
{
	if (testDate(str, true) == false)
		return ;
	else if (n.length() == 0 || checkBlank(n) == false)
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
		std::cout << str << " => " << atof(n.c_str()) <<
			" = Error: too large number" << std::endl;
		return ;
	}
	else if (checkNumeric(n) == false)
	{
		std::cout << str << " => Error: only numbers" << std::endl;
		return ;
	}

	std::map<std::string, float>::iterator it = _dataBase.begin();
	std::map<std::string, float>::iterator itmp;
	std::map<std::string, float>::iterator itmp2;

	if (_dataBase.empty())
	{
		std::cout << str << " => Error: data base is empty" << std::endl;
		return ;
	}
	if (it->first > str)
	{
		std::cout << str << " => no data available" << std::endl;
		return ;
	}
	while (it != _dataBase.end())
	{
		if (it->first > str)
		{
			if (it != _dataBase.begin())
				it--;
			std::cout << str << " => " << atof(n.c_str()) << " = "
				<< static_cast<double>((atof(n.c_str()) * it->second)) << std::endl;
			return ;
		}
		it++;
	}
	it--;
	std::cout << str << " => " << atof(n.c_str()) << " = "
		<< static_cast<double>((atof(n.c_str()) * it->second)) << std::endl;
}

static bool checkFormat(std::string format)
{
	if (format == "date|value" || format == "date |value" || format == "date| value"
		|| format == "date | value")
		return(true);
	std::string tmp = strtok((char*)format.c_str(), " ");
	if (tmp != "date")
		return (false);

	int i = tmp.length();
	i++;
	while (format[i] && format[i] == ' ')
		i++;

	format.erase(0, i);
	i = 0;
	if (format[i] != '|')
		return (false);
	i++;

	while (format[i] && format[i] == ' ')
		i++;
	format.erase(0, i);
	if (format != "value")
		return (false);
	return (true);
}

static bool testFormat(std::string str)
{
	if (!isdigit(str[0]) || !isdigit(str[1]) || !isdigit(str[2])
		|| !isdigit(str[3]) || str[4] != '-')
		return (false);
	return (true);
}

static bool testPrice(std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]) && str[i] != ' ' && str[i] != '.' && str[i] != '-')
			return (false);
	}
	return (true);
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
	if (checkFormat(str) == false)
	{
		std::cerr << "Error, invalid input" << std::endl;
		throw std::exception();
	}
	while (getline(inputFile, str))
	{
		str1 = str;
		if (str.length() == 0)
			std::cout << "One line is missing" << std::endl;
		else
		{
			tmp = strtok((char *)str.c_str(), "|");
			if (tmp == str || testFormat(str) == false)
				std::cout << str1 << " => Bad input" << std::endl;
			else
			{
				str1 = str.erase(0, tmp.length() + 1);
				if (tmp.at(tmp.length() - 1) == ' ')
					tmp.erase(tmp.length() - 1, 1);
				if (testPrice(str) == false)
					std::cout << str1 << " => Bad input" << std::endl;
				else
					_getClosestDate(tmp, str);
			}
		}
	}
}
