/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:00:49 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/11 12:43:25 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	_nbAccounts;
int	_totalAmount;
int	_totalNbDeposits;
int	_totalNbWithdrawals;

void	Account::displayStatus() const
{

}

int	Account::checkAmount() const
{
	return (5);
}

bool	Account::makeWithdrawal(int withdrawal)
{
	std::cout << "MakeWithrawal from " << this->_accountIndex << std::endl;
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	return (1);
}

void	Account::makeDeposit(int deposit)
{
	std::cout << "MakeDeposit from " << this->_accountIndex << std::endl;
	this->_amount += deposit;
	//this->_totalNbDeposits++;
	this->_nbDeposits++;
}

void	Account::_displayTimestamp()
{
	timespec	t;
	timespec_get(&t, TIME_UTC);

	std::cout << t.tv_nsec;
}

void	Account::displayAccountsInfos()
{
	std::cout << "displatAccountsInfos" <<std::endl;
	std::cout << "[";
	_displayTimestamp();
	std::cout << "]" << std::endl;
}

int	Account::getNbAccounts()
{
	return (1);
}

int	Account::getTotalAmount()
{
	return (1);
}

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
}

Account::~Account()
{

}
