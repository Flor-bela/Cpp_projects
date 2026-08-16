#ifndef SAMPLE_ADHOC_HPP
# define SAMPLE_ADHOC_HPP

class Sample_AdHoc
{
	public:
		void	bar( char const c ) const;
		void	bar( int const n ) const;
		void	bar( float const z ) const;
		void	bar( Sample_AdHoc const &i ) const;

		Sample_AdHoc( void );
		~Sample_AdHoc( void );

};

#endif