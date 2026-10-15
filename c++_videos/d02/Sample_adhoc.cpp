#include "Sample_adhoc.hpp"
#include <iostream>

Sample_AdHoc::Sample_AdHoc( void )
{
	std::cout << "Constructor called" << std::endl;
}

Sample_AdHoc::~Sample_AdHoc( void )
{
	std::cout << "Destructor called" << std::endl;
}

void	Sample_AdHoc::bar( char const c ) const
{
	std::cout << "Member function with of char const c: " << c << std::endl;
}

void	Sample_AdHoc::bar( int const n ) const
{
	std::cout << "Member function with of int const n: " << n << std::endl;
}

void	Sample_AdHoc::bar( float const z ) const
{
	std::cout << "Member function with of float const z: " << z << std::endl;
}

/* void	Sample_AdHoc::bar( Sample_AdHoc const &i ) const
{
	std::cout << "Member function with of Sample_AdHoc const &i: " << i << std::endl; // No funciona con std::out -> std::cout does not know how to print a custom object of type Sample_AdHoc. You are trying to print the entire object i directly, which is an error in C++
} */

void	Sample_AdHoc::bar( Sample_AdHoc const &i ) const
{
	( void ) i; // the correct way for this one
	std::cout << "Member function with Sample_AdHoc const &i" << std::endl;
}