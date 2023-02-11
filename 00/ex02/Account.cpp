/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:00:49 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/11 14:15:53 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

void	Account::displayStatus() const
{
	//std::cout << "displayStatus" << std::endl;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawls:" << getNbWithdrawals() << std::endl;
}

int	Account::checkAmount() const
{
	std::cout << "checkAmount: ";
	if (this->_amount > this->getTotalAmount())
	{
		std::cout << "refused" << std::endl;
		return (1);
	}
	std::cout << "accepted" << std::endl;
	return (0);
}

bool	Account::makeWithdrawal(int withdrawal)
{
	std::cout << "MakeWithrawal from " << this->_accountIndex << std::endl;
	if (this->_amount - withdrawal < 0)
		std::cout << "Withdrwal refused" << std::endl;
	else
	{
		this->_nbWithdrawals++;
		this->_amount -= withdrawal;
	}
	return (1);
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposits:" << deposit << ";";
	this->_amount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	this->_nbDeposits++;
	std::cout << "nb_deposits:" << getNbDeposits() << std::endl;
}

void	Account::_displayTimestamp()
{
	timespec	t;
	timespec_get(&t, TIME_UTC);

	std::cout << "[";
	std::cout << t.tv_sec;
	std::cout << "] ";
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() <<";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawls:" << getNbWithdrawals() << std::endl;
}

int	Account::getNbAccounts()
{
	return (_nbAccounts);
}

int	Account::getTotalAmount()
{
	return (_totalAmount);
}

int	Account::getNbDeposits()
{
	return (0);
}

int	Account::getNbWithdrawals()
{
	return (0);
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	std::cout << "index:" << this->_nbAccounts;
	std::cout << ";amount:" << initial_deposit << ";";
	std::cout << "created" << std::endl;
	this->_nbAccounts++;
	_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
}

Account::~Account()
{
	std::cout << "Destructor" << std::endl;
}

//public:

//	typedef Account		t;

//	static int	getNbAccounts( void );
//	static int	getTotalAmount( void );
//	static int	getNbDeposits( void );
//	static int	getNbWithdrawals( void );
//	static void	displayAccountsInfos( void );

//	Account( int initial_deposit );
//	~Account( void );

//	void	makeDeposit( int deposit );
//	bool	makeWithdrawal( int withdrawal );
//	int		checkAmount( void ) const;
//	void	displayStatus( void ) const;


//private:

//	static int	_nbAccounts;
//	static int	_totalAmount;
//	static int	_totalNbDeposits;
//	static int	_totalNbWithdrawals;

//	static void	_displayTimestamp( void );

//	int				_accountIndex;
//	int				_amount;
//	int				_nbDeposits;
//	int				_nbWithdrawals;

//	Account( void );

//};
