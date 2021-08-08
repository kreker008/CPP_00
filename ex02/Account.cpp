#include "Account.hpp"
#include "iostream"
#include <ctime>
#include "string"

int Account:: _nbAccounts = 0;
int Account:: _totalAmount = 0;
int Account:: _totalNbDeposits = 0;
int Account:: _totalNbWithdrawals = 0;


int Account::getNbAccounts()
{
	return (_nbAccounts);
}

int Account::getTotalAmount()
{
	return (_totalAmount);
}

int Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

Account::Account(int initial_deposit) : _amount(initial_deposit), _accountIndex(_nbAccounts),
_nbDeposits(0), _nbWithdrawals(0)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
	_totalAmount += initial_deposit;
	++_nbAccounts;
}

Account::Account(){}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:"<< _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:"<< _nbWithdrawals << std::endl;
}

int	Account::checkAmount() const
{
	return (_amount);
}

void	Account::makeDeposit(int deposit)
{
	++_nbDeposits;
	++_totalNbDeposits;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount += deposit;
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
	_totalAmount +=deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	else
		std::cout << withdrawal << ";";
	++_nbWithdrawals;
	++_totalNbWithdrawals;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}
Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount;" << _amount << ";";
	std::cout << "closed" << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);
	std::cout << "[" << timeinfo->tm_year + 1900;
	int mon = timeinfo->tm_mon;
	int day = timeinfo->tm_mday;
	int hour = timeinfo->tm_hour;
	int minut = timeinfo->tm_min;
	int	sec = timeinfo->tm_sec;
	if (mon < 10)
		std::cout << "0";
	std::cout << mon;
	if (day < 10)
		std::cout << "0";
	std::cout << day;
	std::cout << "_";
	if (hour < 10)
		std::cout << "0";
	std::cout << hour;
	if (minut < 10)
		std::cout << "0";
	std::cout << minut;
	if (sec < 10)
		std::cout << "0";
	std::cout << sec << "] ";
}