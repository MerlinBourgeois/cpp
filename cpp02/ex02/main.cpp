#include "Fixed.hpp"
#include <iostream>

int main( void ) {
	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(2.5f);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "b + c = " << b + c << std::endl;
	std::cout << "b - c = " << b - c << std::endl;
	std::cout << "b * c = " << b * c << std::endl;
	std::cout << "b / c = " << b / c << std::endl;
	std::cout << "b < c ->" << (b < c) << std::endl;
	std::cout << "b > c ->" << (b > c) << std::endl;
	std::cout << "b <= c ->" << (b <= c) << std::endl;
	std::cout << "b >= c ->" << (b >= c) << std::endl;
	std::cout << "b == c ->" << (b == c) << std::endl;
	std::cout << "a == a ->" << (a == a) << std::endl;
	std::cout << "b != c ->" << (b != c) << std::endl;
	std::cout << "a != a ->" << (a != a) << std::endl;
	std::cout << "++ prefix -> " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "++ postfix -> "<< a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "max(a=" << a << ",b=" << b << "): " << Fixed::max(a, b) << std::endl;
	std::cout << "min(a=" << a << ",b=" << b << "): " << Fixed::min(a, b) << std::endl;

	return 0;
}