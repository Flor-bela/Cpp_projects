#ifndef SAMPLE_CONST_HPP
# define SAMPLE_CONST_HPP

class SampleConst
{
	public:
		float const pi;
		int			qb;

	SampleConst(float const p1);
	~SampleConst(void);

	void	bar(void) const; // buena practica
	//void	bar(void);		// mala practica porque hay un valor const dentro!
};

#endif