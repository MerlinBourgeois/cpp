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
	this->newFloat = 0;
}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed& f)
{
	*this = f;
}

Fixed& Fixed::operator=(const Fixed& f)
{
	if (this == &f)
		return *this;
	this->newFloat = f.newFloat; 
	return *this;
}

bool Fixed::operator==(const Fixed& f) const
{
	if (this->getRawBits() == f.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator!=(const Fixed& f) const
{
	if (this->getRawBits() != f.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator>(const Fixed& f) const
{
	if (this->getRawBits() > f.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator<(const Fixed& f) const
{
	if (this->getRawBits() < f.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator>=(const Fixed& f) const
{
	if (this->getRawBits() >= f.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator<=(const Fixed& f) const
{
	if (this->getRawBits() <= f.getRawBits())
		return (true);
	else
		return (false);
}

Fixed Fixed::operator+(const Fixed& f) const
{
	return (Fixed(this->toFloat() + f.toFloat()));
}

Fixed Fixed::operator-(const Fixed& f) const
{
	return (Fixed(this->toFloat() - f.toFloat()));
}

Fixed Fixed::operator/(const Fixed& f) const
{
	return (Fixed(this->toFloat() / f.toFloat()));
}

Fixed Fixed::operator*(const Fixed& f) const
{
	return (Fixed(this->toFloat() * f.toFloat()));
}

Fixed Fixed::operator++( int )
{
	Fixed copy (*this);
	this->newFloat += 1;
	return copy;
}

Fixed Fixed::operator--( int )
{
	Fixed copy (*this);
	this->newFloat -= 1;
	return copy;
}

Fixed& Fixed::operator++( void )
{
	++this->newFloat;
	return(*this);
}

Fixed& Fixed::operator--( void )
{
	--this->newFloat;
	return(*this);
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

Fixed& Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1 > f2)
		return f2;
	else
		return f1;
}

const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2)
{
	if (f1 > f2)
		return f2;
	else
		return f1;
}

Fixed& Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1 < f2)
		return f2;
	else
		return f1;
}

const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2)
{
	if (f1 < f2)
		return f2;
	else
		return f1;
}