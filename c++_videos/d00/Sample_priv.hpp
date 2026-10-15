#ifndef SAMPLE_PRIV_HPP
# define SAMPLE_PRIV_HPP

class Sample_priv
{
	public:

		Sample_priv(void);
		~Sample_priv(void);

		int	foo;
		
		void	ft_foo(void);
	
	private:

		int	_bar;
		
		void	_ft_bar(void);
};


#endif