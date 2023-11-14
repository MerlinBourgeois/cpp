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
	bool operator==( const Fixed& f ) const;
	bool operator!=( const Fixed& f ) const;
	bool operator>( const Fixed& f ) const;
	bool operator<( const Fixed& f ) const;
	bool operator>=( const Fixed& f ) const;
	bool operator<=( const Fixed& f ) const;

	Fixed operator+( const Fixed& f ) const;
	Fixed operator-( const Fixed& f ) const;
	Fixed operator/( const Fixed& f ) const;
	Fixed operator*( const Fixed& f ) const;

	Fixed operator++( int );
	Fixed operator--( int );
	Fixed& operator++( void );
	Fixed& operator--( void );

	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );

	static Fixed& min(Fixed& f1, Fixed& f2);
	static const Fixed& min(const Fixed& f1, const Fixed& f2);
	static Fixed& max(Fixed& f1, Fixed& f2);
	static const Fixed& max(const Fixed& f1, const Fixed& f2);
};

std::ostream& operator<<( std::ostream& output, const Fixed& f );

#endif