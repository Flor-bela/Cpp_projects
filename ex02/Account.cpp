#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime> // std::time_t, struct std::tm, std::localtime

// nb -> number

// private static attributes (non-member attributes): (we need to initiate them)

// cuando se "resetean ?? nunca?"
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


Account::Account(int initial_deposit) // constructor (para inicializar la Account)
{
	_accountIndex = Account::_nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	
	Account::_nbAccounts++; // aumentamos el numero de accounts que tenemos
	Account::_totalAmount = Account::_totalAmount + initial_deposit;
	
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
}


Account::~Account( void ) // destructor // esto actua en cada account que cierro, y como habro varias debo actualizar los datos donde tengo el numero total de cuentas abiertas
{
	Account::_nbAccounts--;
	Account::_totalAmount -= _amount;


	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
	// should I reset static attributes here once I leave???
	// or is it all reset once I just leave?
}


// Getters
int	Account::getNbAccounts( void ) // static
{
	return Account::_nbAccounts; // siendo static creo que tengo que hacer así con Account:: antes de la variable
}

int	Account::getTotalAmount( void ) // static
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void ) // static -> for the total number no? I think so
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) // static -> for the total number no? I think so
{
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ":withdrawals:" << Account::_totalNbWithdrawals << std::endl;
	return ;
}


// Setters
void	Account::makeDeposit(int deposit)
{
	int	p_amount; // previous_amount;

	p_amount = _amount;
	_amount += deposit;
	_nbDeposits++;
	Account::_totalAmount += deposit; // total amount deposited?? (no estoy segura de esta)
	Account::_totalNbDeposits++; // (creo que tengo que hacer así porque es static) -> cada vez que se hace un deposito se aumenta

	Account::_displayTimestamp();
	std::cout << " index:" << Account::_accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit << ";amount:" << Account::_amount << ";nb_deposits:" << _nbDeposits << std::endl;
	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
// checkAmount?? tengo que usarla aquí?
	int	p_amount;

	p_amount = _amount;
	if (p_amount < withdrawal)
	{
		Account::_displayTimestamp();
		std::cout << " index:" << Account::_accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << "refused" << std::endl;
		return false;
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_displayTimestamp();
	std::cout << " index:" << Account::_accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal << ";amount:" << Account::_amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return true;
}

// getter 
int		Account::checkAmount( void ) const // imagino que es para acceder a _amount ??
{
	return _amount; // ?? o this->_amount??? esto solo???
	// creo que si fuera para el static 
	// esto es para _amount??? para quien quiera de fuera, pueda verlo??
}

// getter
void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << Account::_accountIndex << ";amount:" << Account::_amount << ";deposits:" << Account::_nbDeposits << ";withdrawals:" << Account::_nbWithdrawals << std::endl;
	return ;
}

// private
void	Account::_displayTimestamp( void ) // siendo private esta funcion, tengo que hacerle algo más de especial???
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
