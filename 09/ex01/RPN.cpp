/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:07:02 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/05/05 16:59:33 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RPN.hpp>

RPN::RPN() : _arg("no_input"), _result(0) {}

RPN::RPN(std::string arg) : _arg(arg)
{
	_result = _calcResult();
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

int RPN::_calcResult(void)
{
	for (long unsigned int i = 0; i < _arg.size(); i++)
	{
		if (isdigit(_arg[i]))
			_dequeNum.push_front(_arg[i] - 48);
		else if (isMath(_arg[i]))
		{
			if (_dequeNum.size() < 2)
				throw std::exception();
			int firstNum = _dequeNum[1];
			int secondNum = _dequeNum[0];
			_dequeNum.pop_front();
			_dequeNum.pop_front();
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
			_dequeNum.push_front(firstNum);
		}
		else if (_arg[i] != ' ')
			throw std::exception();
	}
	return (_dequeNum[0]);
}
std::ostream & operator << (std::ostream & i, RPN const &src)
{
	i << src.getResult();
	return (i);
}
