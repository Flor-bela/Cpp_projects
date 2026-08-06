// Prototyping the functions and declaring them in the same .cpp file, but only for this case, otherwise, we should prototype them in the .hpp only.
#include <string>
#include <iostream>

class Student
{
	private:
		std::string	_login;

	public:
		Student(std::string const & login): _login(login) // Constructor
		{
		}

		std::string&	getLoginRef()
		{
			return this->_login;
		}

		std::string const & getLoginRefConst() const
		{
			return this ->_login;
		}

		std::string*	getLoginPtr()
		{
			return &(this->_login);
		}

		std::string const * getLoginPtrConst() const
		{
			return &(this->_login);
		}
		// in the video he didn´t even create the destructor...
};


int	main( void )
{
	// on my own:
	Student	bob("Bob"); // because the constructor has a initialized list! We need to initialize it like this
	Student	tim("Tim");

	std::cout << bob.getLoginPtrConst() << std::endl; // returns the memory address
	std::cout << *bob.getLoginPtrConst() << std::endl; // returns the value Bob
	std::cout << *(bob.getLoginPtrConst()) << std::endl; // lo mismo que arriba

	std::cout << tim.getLoginRefConst() << std::endl;
	
	// from the video:
	Student	bob2 = Student("bfubar"); // otra manera de llamar al constructor (lo mismo que anteriormente)
	Student	const tim2 = Student("tfubar");

	std::cout << bob2.getLoginRefConst() << " " << tim2.getLoginRefConst() << std::endl;

	bob2.getLoginRef() = "Bob2"; // basicamente después de coger el reference le asigno el valor nuevo -> funciona como un setter (getter y un setter juntos en este caso)
	// *(tim2.getLoginPtr()) = "Tim2"; no se puede el tim2 porque es const
	std::cout << bob2.getLoginRefConst() << " " << tim2.getLoginRefConst() << std::endl;

	*(bob2.getLoginPtr()) = "Bob2_final";
	//*bob2.getLoginPtr() = "Bob2_final"; // es lo mismo que el anterior
	std::cout << bob2.getLoginRefConst() << " " << tim2.getLoginRefConst() << std::endl;
	

	return 0;
}