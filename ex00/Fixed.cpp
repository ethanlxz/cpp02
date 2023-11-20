#include "Fixed.hpp"

const int	Fixed::frac = 8;

Fixed::Fixed(void): value(0)
{
	std::cout << "Default constructor called" << std::endl; 
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl; 
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

//copy assigement operator

int	Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(const int raw)
{
	this->value = raw;
}