#include "Fixed.hpp"

const int	Fixed::frac = 8;

Fixed::Fixed(void): _value(0)
{
	std::cout << "Fixed object created with default constructor" << std::endl; 
}

Fixed::~Fixed(void)
{
	std::cout << "Fixed object destroyed" << std::endl; 
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Fixed object copied" << std::endl;
	*this = copy;
}

//copy assigement operator

int	Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(const int raw)
{
	this->value = raw;
}