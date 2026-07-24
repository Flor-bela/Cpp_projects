// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <vector> // for dynamic array allocation
#include <algorithm> // ?? 
#include <functional> // ??
#include "Account.hpp"


int		main( void ) {

	// definitions
	typedef std::vector<Account::t>							  accounts_t; //alias an array of class Account - it is defined inside the class but I also need to do it here to use it
	typedef std::vector<int>								  ints_t; 
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t; // iterator is from std::vector

	// creating instances
	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 }; // array int
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) ); // 32 / 4 = 8 -> this tells us how many elements are in amounts[]
	accounts_t				accounts( amounts, amounts + amounts_size );  // constructor receives this and prints: [19920104_091532] index:0;amount:42;created 
	accounts_t::iterator	acc_begin	= accounts.begin();  // la primera account que sera 42 imagino
	accounts_t::iterator	acc_end		= accounts.end(); // -> (past-the-end) end es justo después de el ultimo, por eso si queremos ir hasta el final, necesitamos decir i != accounts.end()

	// deposits
	int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9, 20 }; // otro array int
	size_t const		d_size( sizeof(d) / sizeof(int) );
	ints_t				deposits( d, d + d_size );
	ints_t::iterator	dep_begin	= deposits.begin();
	ints_t::iterator	dep_end		= deposits.end();

	// withdrawals
	int	const			w[]			= { 321, 34, 657, 4, 76, 275, 657, 7654 };
	size_t const		w_size( sizeof(w) / sizeof(int) );
	ints_t				withdrawals( w, w + w_size );
	ints_t::iterator	wit_begin	= withdrawals.begin();
	ints_t::iterator	wit_end		= withdrawals.end();


	Account::displayAccountsInfos(); /// funcion que tengo que hacer en Account.cpp [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
	
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) ); // [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0 esto para cada una de las accounts

	//  it es un iterador del tipo acc_int_t
	for ( acc_int_t it( acc_begin, dep_begin );
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeDeposit( *(it.second) ); //deposits here  [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
	}

	Account::displayAccountsInfos(); // row 26 [19920104_091532] accounts:8;total:21524;deposits:8;withdrawals:0
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) ); // row 27 [19920104_091532] index:0;amount:47;deposits:1;withdrawals:0


// hecho hasta aquí!!!!! 
	for ( acc_int_t it( acc_begin, wit_begin );
		  it.first != acc_end && it.second != wit_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeWithdrawal( *(it.second) ); // from row 35 [19920104_091532] index:0;p_amount:47;withdrawal:refused // escribe refused si el valor de withdrawal es mayor que el valor que tiene la persona en la account // [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1 // si es exitoso enseña así
	}

	Account::displayAccountsInfos(); // enseñar de nuevo al final4
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) ); // enseñar que su status ahora es closed...no sé porque pero eso es lo que debe ser....closed porque usamos el destructor??? debe ser....

	return 0;
}


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //
  