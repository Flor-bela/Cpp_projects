#include "Account.hpp"
#include <vector> // for dynamic array allocation
#include <algorithm> // std::for_each  -> to be able to use it with std::
#include <functional> // for std::mem_fun_ref
#include <iostream>

int		main( void )
{
	typedef std::vector<Account::t>							  accounts_t; //alias an array of class Account - it is defined inside the class but I also need to do it here to use it
	typedef std::vector<int>								  ints_t; 
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t; // iterator is from std::vector

	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 }; // array int
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) ); // 32 / 4 = 8 -> this tells us how many elements are in amounts[]
	accounts_t				accounts( amounts, amounts + amounts_size );  // constructor receives this and prints: [19920104_091532] index:0;amount:42;created 
	accounts_t::iterator	acc_begin	= accounts.begin();  // la primera account que sera 42 imagino
	accounts_t::iterator	acc_end		= accounts.end(); // la ultima account que sera 16576 

	// deposits
	int	const				d[]		= { 5, 765, 564, 2, 87, 23, 9, 20 };
	size_t	const			d_size( sizeof(d) / sizeof(int) );
	ints_t					deposits( d, d + d_size);
	ints_t::iterator		dep_begin = deposits.begin();
	ints_t::iterator		dep_end = deposits.end();

	// withdrawals
	int	const				w[]		=  { 321, 34, 657, 4, 76, 275, 657, 7654 }; // ocupa 32 bytes -> porque son 8 elementos * 4 bytes (porque int ocupa 4 bytes cada)
	size_t	const			w_size( sizeof(w) / sizeof(int)); // -> 32 / 4 = 8 elementos
	ints_t					withdrawals(w, w + w_size); // donde empieza y donde acaba (w (en el primer elemento del array w)+ w_size (que es el primer elemento más 8 elementos del total que existen, o sea past-the-end del array w))
	ints_t::iterator		wit_begin = withdrawals.begin();
	ints_t::iterator		wit_end = withdrawals.end();


	Account::displayAccountsInfos();

	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) ); // [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0 esto para cada una de las accounts

	//deposits
	for ( acc_int_t it(acc_begin, dep_begin);
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeDeposit( *(it.second) );
	}

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) ); 

	//withdrawals
	for (acc_int_t it(acc_begin, wit_begin);
		it.first != acc_end && it.second != wit_end;
		++(it.first), ++(it.second) ) {
		
		(*(it.first)).makeWithdrawal( *(it.second) );
	}
	
	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) ); 


	// Destructor messages here

	return 0;
}