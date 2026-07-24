/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-roch <<fda-roch@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 20:51:38 by fda-roch          #+#    #+#             */
/*   Updated: 2026/07/24 21:04:33 by fda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	_accountIndex = Account::_nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	Account::_nbAccounts++;
	Account::_totalAmount = Account::_totalAmount + initial_deposit;
	
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex
			  << ";amount:" << initial_deposit
			  << ";created" << std::endl;
}

Account::~Account( void )
{
	Account::_nbAccounts--;
	Account::_totalAmount -= _amount;

	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::_nbAccounts
			  << ";total:" << Account::_totalAmount
			  << ";deposits:" << Account::_totalNbDeposits
			  << ";withdrawals:" << Account::_totalNbWithdrawals
			  << std::endl;
	return ;
}

void	Account::makeDeposit( int deposit )
{
	int	p_amount;

	p_amount = _amount;
	_amount += deposit;
	_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;

	Account::_displayTimestamp();
	std::cout << " index:" << Account::_accountIndex
			  << ";p_amount:" << p_amount
			  << ";deposit:" << deposit 
			  << ";amount:" << Account::_amount
			  << ";nb_deposits:" << _nbDeposits
			  << std::endl;
	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int	p_amount;

	p_amount = _amount;
	if (p_amount < withdrawal)
	{
		Account::_displayTimestamp();
		std::cout << " index:" << Account::_accountIndex
				  << ";p_amount:" << p_amount
				  << ";withdrawal:" << "refused"
				  << std::endl;
		return false;
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_displayTimestamp();
	std::cout << " index:" << Account::_accountIndex
			  << ";p_amount:" << p_amount
			  << ";withdrawal:" << withdrawal
			  << ";amount:" << Account::_amount
			  << ";nb_withdrawals:" << _nbWithdrawals
			  << std::endl;
	return true;
}

int		Account::checkAmount( void ) const
{
	return _amount;
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << Account::_accountIndex
			  << ";amount:" << Account::_amount
			  << ";deposits:" << Account::_nbDeposits
			  << ";withdrawals:" << Account::_nbWithdrawals
			  << std::endl;
	return ;
}

void	Account::_displayTimestamp( void )
{
	std::time_t		timer;
	std::tm			*ptm;
	char			buffer[32];

	time(&timer);
	ptm = std::localtime(&timer);
	std::strftime(buffer, sizeof(buffer),"[%Y%m%d_%H%M%S]", ptm);
	std::cout << buffer;
	return ;
}
