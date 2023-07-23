/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:07:02 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/06/30 08:53:43 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RPN.hpp>

RPN::RPN() : _arg("no_input"), _result(0) {}

RPN::RPN(std::string arg) : _arg(arg)
{
	if (_arg.empty())
		throw std::exception();
	_result = _calcResult();
}

RPN::RPN(const RPN&src)
{
	*this = src;
}

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

int RPN::_calcResult(void)
{
	for (long unsigned i = 0; i < _arg.size(); i++)
	{
		if ((isdigit(_arg[i]) || isMath(_arg[i])) && (i + 1 < _arg.size() && _arg[i + 1] != ' '))
			throw std::exception();
		if (isdigit(_arg[i]))
			_listNum.push_front(_arg[i] - 48);
		else if (isMath(_arg[i]))
		{
			if (_listNum.size() < 2)
				throw std::exception();

			int secondNum = _listNum.front();
			_listNum.pop_front();
			int firstNum = _listNum.front();
			_listNum.pop_front();
			if (_arg[i] == '+')
				firstNum += secondNum;
			else if (_arg[i] == '-')
				firstNum -= secondNum;
			else if (_arg[i] == '*')
				firstNum *= secondNum;
			else if (_arg[i] == '/')
			{
				if (secondNum == 0)
					throw std::exception();
				firstNum /= secondNum;
			}
			_listNum.push_front(firstNum);
		}
		else if (_arg[i] != ' ')
			throw std::exception();
	}
	if (_listNum.size() > 1)
		throw std::exception();
	return (_listNum.front());
}
std::ostream & operator << (std::ostream & i, RPN const &src)
{
	i << src.getResult();
	return (i);
}
