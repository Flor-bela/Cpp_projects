#include <stdio.h>

// Namespaces: we can call different Namespaces, like a struct, but each one can have the same variable name (hmm but I think we could do this as well before with structs...)
// The :: (scope resolution operator) let us access those variables from each Namespace.
// If we want to use a Namespace already called elsewhere (like in a external "library"), we can do
	// using namespace std (and then we can just do cout or without the using namespace std and access it with std::cout to access this resource to print in standard output)

int	gl_var = 1;
int f(void) {return 1;}

namespace Foo {
	int	gl_var = 2;
	int	f(void) {return 2;}
}

namespace Bar {
	int	gl_var = 3;
	int	f(void) {return 3;}
}

namespace Muf = Bar; // aliasing

int	main(void)
{
	printf("gl_var: [%d]\n", gl_var);
	printf("f(): [%d]\n", f());

	printf("Foo::gl_var: [%d]\n", Foo::gl_var);
	printf("Foo::f(): [%d]\n\n", Foo::f()); //only had Foo::f (and it gave an error saying it was a pointer and not an int so %d didn´t work; we need to add the ())

	printf("Bar::gl_var: [%d]\n", Bar::gl_var);
	printf("Bar::f(): [%d]\n\n", Bar::f());

	printf("Muf::gl_var: [%d]\n", Muf::gl_var); // Aquí son los datos de Bar 
	printf("Muf::f(): [%d]\n\n", Muf::f());

	printf("::gl_var: [%d]\n", ::gl_var); // Another way to call the globar variables
	printf("::f(): [%d]\n", ::f());

	return (0);
}