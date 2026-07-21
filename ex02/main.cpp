#include "Account.hpp"
#include <vector> // for dynamic array allocation
#include <iostream>

int		main( void )
{
	typedef std::vector<Account::t>							  accounts_t; //alias an array of class Account - it is defined inside the class but I also need to do it here to use it

	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 }; // array int
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) ); // 32 / 4 = 8 -> this tells us how many elements are in amounts[]
	accounts_t				accounts( amounts, amounts + amounts_size );  // constructor receives this and prints: [19920104_091532] index:0;amount:42;created 
	

	return 0;
}