#include "Students_new_delete_array.hpp"

int	main( void )
{
	Students	*all = new Students[10]; // un array de 10 estudiantes

	delete [] all;

	return 0;
}
