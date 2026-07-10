#ifndef SAMPLE_ACC_HPP
# define SAMPLE_ACC_HPP

class Sample_acc
{
	public:

		Sample_acc(void);
		~Sample_acc(void);

		int	getFoo(void) const; //const because a getter may only access and read in read-only mode
		bool	setFoo(int v);

	private:
		//int	_foo = 0; // -> no estoy segura que deba hacerlo así directamente, pero bueno por ahora lo dejo así
		// mejor inicializarlo en el constructor!!!
		int	_foo;
};


#endif