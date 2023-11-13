#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int newFloat;
	static const int fractBits = 8;
public:
	Fixed();
	~Fixed();
	Fixed( const Fixed& f );
	Fixed( const int N );
	Fixed( float const value );
	Fixed& operator=( const Fixed& f );
	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

std::ostream& operator<<( std::ostream& output, const Fixed& f );

#endif