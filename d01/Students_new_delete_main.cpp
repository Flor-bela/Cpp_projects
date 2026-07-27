#include "Students_new_delete.hpp"

int		main( void )
{
	Students	*first = new Students("Isabella"); // on heap
	Students	second = Students("Juan"); // on stack

	delete first; // Isabella that was saved on the heap is destroyed here

	return 0; // Juan is destroyed here
}