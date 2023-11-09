#include "Fixed.hpp"

Fixed::Fixed(const int N)
{
	this->newFloat = N << this->fractBits;	
}

Fixed::Fixed(float const value)
{
	this->newFloat = static_cast<int>(roundf(value * (1 << this->fractBits)));
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->newFloat = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed& Fixed::operator=(const Fixed& f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &f)
		return *this;
	this->newFloat = f.newFloat;
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->newFloat;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->newFloat = raw;
}