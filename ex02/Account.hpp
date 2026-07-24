// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                      //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once // ???? 
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {


public:

	typedef Account		t;

	// non-member functions (and getters)
	static int	getNbAccounts( void ); // non-member functions: static!!! We do not need to instantiate an object to use these functions
	static int	getTotalAmount( void );
	static int	getNbDeposits( void );
	static int	getNbWithdrawals( void );
	static void	displayAccountsInfos( void ); // 1ª funcion en tests.cpp (debe ser donde aparece toda la info )


	Account( int initial_deposit ); // constructor with initial amount -> initiated like this is main accounts_t accounts( amounts, amounts + amounts_size ); [19920104_091532] index:0;amount:42;created
	~Account( void ); // destructor

	// setters
	void	makeDeposit( int deposit );
	bool	makeWithdrawal( int withdrawal ); // 3ª funcion que aparece // esta tengo que ver si tengo dinero suficiente para poder sacarlo
	
	//getters
	int		checkAmount( void ) const; // pero porque hacer esta funcion??? puedo usar la variable de _amount directamente no???

	void	displayStatus( void ) const; // 2º funcion en tests.cpp : parece que es "created" or "closed"


private:

	static int	_nbAccounts; // non-member attributes (variables)
	static int	_totalAmount;
	static int	_totalNbDeposits;
	static int	_totalNbWithdrawals;

	static void	_displayTimestamp( void ); // 1 cosa que tiene que aparecer... ver como hacer print de un timestamp con el formato que aparece

	int				_accountIndex; // private info // si no es static y creo varias instances de Account, como sé cual es cual index???
	int				_amount;
	int				_nbDeposits;
	int				_nbWithdrawals;

};


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */
