#ifndef SAMPLE_COMP_HPP
# define SAMPLE_COMP_HPP

class	Sample_comp
{
	public:

		Sample_comp(int v);
		~Sample_comp(void);

		int	getFoo(void) const;
		int	compFoo(Sample_comp *other);

	private:

		int	_foo;
};

#endif