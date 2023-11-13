#include "Fixed.hpp"

Fixed::Fixed(const int N)
{
	this->newFloat = N << this->fractBits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const value)
{
	this->newFloat = static_cast<int>(roundf(value * (1 << this->fractBits)));
	std::cout << "Float constructor called" << std::endl;
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
	return this->newFloat;
}

void Fixed::setRawBits( int const raw )
{
	this->newFloat = raw;
}

float Fixed::toFloat( void ) const
{
	return static_cast<float>(this->getRawBits()) / (1 << this->fractBits);
}

int	Fixed::toInt( void ) const
{
	return (this->getRawBits() >> this->fractBits);
}

std::ostream& operator<<( std::ostream& output, const Fixed& f )
{
	output << f.toFloat();
	return(output);
}