#ifndef STUDENTS_NEW_DELETE
# define STUDENTS_NEW_DELETE

#include <string>


class Students
{
	public:

	Students( std::string login );
	~Students( void );

	private:

	std::string	_userLogin;

};


#endif