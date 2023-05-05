/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:07:02 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/05/02 16:14:05 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RPN.hpp>

RPN::RPN() : _arg("no_input"), _result(0) {}

RPN::RPN(std::string arg) : _arg(arg), _result(0)
{
	_parseArg();
	_calcResult();
}

RPN::RPN(const RPN&src) { *this = src; }

RPN& RPN::operator=(const RPN& src)
{
	if (this != &src)
	{
		_arg = src._arg;
		_result = src._result;
	}
	return (*this);
}

RPN::~RPN() {}

int RPN::getResult() const { return (_result); }

static int isMath(char c)
{
	if (c == '-' || c == '+' || c == '*' || c == '/')
		return (1);
	return (0);
}

static int testDivZero(int i)
{
	if (i == 0)
		throw std::exception();
	return (1);
}

void RPN::_calcResult(void)
{
	long unsigned int i = 0;

	while (i < _container.size())
	{
		if (isdigit(_container[i]) && i + 1 < _container.size()
			&& isMath(_container[i + 1]))
		{
			std::cout << _result << " " << _container[i + 1] << "= "
				<< _container[i] << " = ";
			if (_container[i + 1] == '-')
				_result -= (_container[i] - 48);
			else if (_container[i + 1] == '+')
				_result += (_container[i] - 48);
			else if (_container[i + 1] == '*')
				_result *= (_container[i] - 48);
			else if (_container[i + 1] == '/' && testDivZero(_container[i] - 48))
				_result /= (_container[i] - 48);
			if (i + 2 < _container.size() && _container[i + 2] == '-')
			{
				_result *= -1;
				i++;
			}
			i += 2;
			std::cout << _result << std::endl;
		}
		else if (i + 1 < _container.size() && i + 2 < _container.size()
			&& i + 3 < _container.size() && (isdigit(_container[i + 3])
			|| _container[i + 3] == '+'))
		{
			std::cout << _result << " += " << _container[i] << " " << _container[i + 2]
				<< " " << _container[i + 1];
			if (_container[i + 2] == '*')
				_result += (_container[i] - 48) * (_container[i + 1] - 48);
			else if (_container[i + 2] == '+')
				_result += (_container[i] - 48) + (_container[i + 1] - 48);
			else if (_container[i + 2] == '-')
				_result += (_container[i] - 48) - (_container[i + 1] - 48);
			else if (_container[i + 2] == '/' && testDivZero(_container[i + 1] - 48))
				_result += (_container[i] - 48) / (_container[i + 1] - 48);
			if (_container[i + 3] == '+')
				i++;
			i += 3;
			std::cout << " = " << _result << std::endl;
		}
		else if (i + 1 < _container.size() && i + 2 < _container.size()
			&& i + 3 < _container.size() && _container[i + 3] == '-')
		{
			std::cout << _result << " += " << _container[i] << " " << _container[i + 3]
				<< " " << (_container[i + 1] - 48) * -1 << std::endl;
			if (_container[i + 3] == '*')
				_result += (_container[i] - 48) * ((_container[i + 1] - 48) * -1);
			else if (_container[i + 3] == '+')
				_result += (_container[i] - 48) + ((_container[i + 1] - 48) * -1);
			else if (_container[i + 3] == '-')
				_result -= (_container[i] - 48) - ((_container[i + 1] - 48) * -1);
			else if (_container[i + 3] == '/' && testDivZero((_container[i + 1] - 48) * -1))
				_result += (_container[i] - 48) / ((_container[i + 1] - 48) * -1);
			i += 4;
		}
		else if (isdigit(_container[i]) && isdigit(_container[i + 1])
			&& isMath(_container[i + 2]))
		{
			std::cout << _result << " = " << _container[i] << " " << _container[i + 2]
				<< " " << _container[i + 1] << " = ";
			if (_container[i + 2] == '-')
				_result += (_container[i] - 48) - (_container[i + 1] - 48);
			else if (_container[i + 2] == '+')
				_result += (_container[i] - 48) + (_container[i + 1] - 48);
			else if (_container[i + 2] == '*')
				_result += (_container[i] - 48) * (_container[i + 1] - 48);
			else if (_container[i + 2] == '/' && testDivZero(_container[i + 1] - 48))
				_result += (_container[i] - 48) / (_container[i + 1] - 48);
			i += 2;
			std::cout << _result << std::endl;
		}
		else
			i++;
	}
}

void RPN::_parseArg(void)
{
	std::string	tmp = _arg;
	std::string	tmp2;

	while (tmp.length() > 0)
	{
		while (tmp[0] == ' ')
			tmp.erase(0, 1);
		tmp2 = strtok((char*)tmp.c_str(), " ");
		if (tmp2.length() > 1)
			throw std::exception();
		_container.push_back(tmp2[0]);
		tmp.erase(0, tmp2.length() + 1);
	}
	long unsigned int i = 0;
	while (i < _container.size())
	{
		if (i == 0 && isdigit(_container[i]) && i + 1 < _container.size()
			&& isMath(_container[i + 1]))
			throw std::exception();
		if (isdigit(_container[i]) && i + 1 < _container.size() && isdigit(_container[i + 1])
			&& i + 2 < _container.size() && isMath(_container[i + 2])
			&& i + 3 < _container.size() && isMath(_container[i + 3])
			&& (i + 4 < _container.size() || i > 0))
			i += 4;
		else if (isdigit(_container[i]) && i + 1 < _container.size()
			&& isdigit(_container[i + 1]) && i + 2 < _container.size()
			&& isMath(_container[i + 2]))
			i += 3;
		else if (isdigit(_container[i]) && i + 1 < _container.size()
			&& isMath(_container[i + 1]) && i + 2 < _container.size()
			&& isMath(_container[i + 2]))
			i += 3;
		else if (isdigit(_container[i]) && i + 1 < _container.size() && isMath(_container[i + 1]))
			i += 2;
		else
			throw std::exception();
	}
}

std::ostream & operator << (std::ostream & i, RPN const &src)
{
	i << src.getResult();
	return (i);
}
