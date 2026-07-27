#ifndef SAMPLE_STATIC_HPP
# define SAMPLE_STATIC_HPP

class	Sample_static
{
	public:
		Sample_static(void);
		~Sample_static(void);

		static	int	getfoo(void);

	private:
		static	int	_foo;

};

#endif