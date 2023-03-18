/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:25:08 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/18 10:26:00 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawls = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::getNbAccounts();
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawls = 0;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount() \
		<< ";created" << std::endl;
	Account::_nbAccounts++;
	return;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount() \
		<< ";closed" << std::endl;
	Account::_nbAccounts--;
	return;
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawls(void)
{
	return (Account::_totalNbWithdrawls);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << \
		";deposits:" << Account::getNbDeposits() << ";withdrawls:" << Account::getNbWithdrawls() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	this->_nbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << \
		";deposit:" << deposit << ";amount:" << this->_amount + deposit << ";nb_deposits:" << \
			this->_nbDeposits << std::endl;
	this->_amount += deposit;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
}

bool	Account::makeWithdrawl( int withdrawl )
{
	Account::_displayTimestamp();
	if (withdrawl > this->_amount)
	{
		std::cout << "index:" << this->_accountIndex << ";p_ammount:" << this->_amount \
		<< ";withdrawl:refused" << std::endl;
		return false;
	}
	else
	{
		this->_nbWithdrawls++;
		Account::_totalNbWithdrawls++;
		std::cout << "index:" << this->_accountIndex << ";p_ammount:" << this->_amount \
			<< ";withdrawl:" <<  withdrawl << ";amount:" << this->_amount - withdrawl << ";nb_withdrawls:" \
				<< this->_nbWithdrawls << std::endl;
		this->_amount -= withdrawl;
		Account::_totalAmount -= withdrawl;
		return true;
	}
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << \
		";deposits:" << this->_nbDeposits << ";withdrawls:" << this->_nbWithdrawls << std::endl;
}

void Account::_displayTimestamp(void)
{
	time_t now;

	now = time(NULL);
	std::cout << std::put_time(localtime(&now), "[%Y%m%d_%H%M%S] ");
}
