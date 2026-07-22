#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime> // std::time_t, struct std::tm, std::localtime

// nb -> number

// private static attributes: (we need to initiate them)
int	Account::_nbAccounts = 0; // non-member attributes (variables)
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


Account::Account(int initial_deposit) // constructor (para inicializar la Account)
{
	_accountIndex = Account::_nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	
	Account::_nbAccounts++;
	Account::_totalAmount = Account::_totalAmount + initial_deposit;
	
	//_totalNbDeposits and _totalNbWithdrawals is not here....I think (on the setters)
	
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
}


Account::~Account() // destructor
{
}


// Getters
int Account::getNbAccounts( void ) // static
{
	return Account::_nbAccounts;
}


int Account::getTotalAmount( void ) // static
{
	return Account::_totalAmount;
}


int Account::getNbDeposits( void ) // static -> for the total number no? I think so
{
	return Account::_totalNbDeposits;
}


int Account::getNbWithdrawals( void ) // static -> for the total number no? I think so
{
	return Account::_totalNbWithdrawals;
}



// static void	displayAccountsInfos( void ); 


// Setters
void	Account::makeDeposit(int deposit)
{
	// i think I will need to use here setters too, no??
	Account::_totalAmount = Account::_totalAmount + deposit;
	Account::_totalNbDeposits++; // (creo que tengo que hacer así porque es static) -> cada vez que se hace un deposito se aumenta
	return ;
}


void	Account::_displayTimestamp( void )
{
	std::time_t		timer; // __STD_TYPE __TIME_T_TYPE __time_t;	/* Seconds since the Epoch (01 January 1970).  */
	std::tm			*ptm; // structure used to store tm_year, tm_mon, tm_hour that we obtain from std::localtime
	char			buffer[32]; // creo que no puedo hacer esto??? 

	time(&timer); // get the current time // this commes from <ctime>
	ptm = std::localtime(&timer); ///* Return the `struct tm' representation of *TIMER in the local timezone.  */
	std::strftime(buffer, sizeof(buffer),"[%Y%m%d_%H%M%S]", ptm); // /* Format TP into S according to FORMAT
	std::cout << buffer;
	return ;
}
