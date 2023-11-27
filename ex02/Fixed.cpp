#include "Fixed.hpp"

static float ft_pow(float num, int exp)
{
	float res = num;
	int i = 0;

	if (exp < 0)
	{
		num = 1 / num;
		exp *= -1;
		exp += 2;
	}
	while (exp - 1 > i)
	{
		res *= num;
		i++;
	}
	return res;
}

const int	Fixed::frac = 8;

Fixed::Fixed(void): value(0)
{
	// std::cout << "Default constructor called" << std::endl; 
}

Fixed::Fixed(const int num): value(roundf(num * ft_pow(2, this->frac)))
{  
	// std::cout << "Int constructor called" << std::endl; 
} 

Fixed::Fixed(const float num): value(roundf(num * ft_pow(2, this->frac)))
{  
	// std::cout << "Float constructor called" << std::endl; 
} 

Fixed::~Fixed(void)
{
// 	std::cout << "Destructor called" << std::endl; 
}

Fixed::Fixed(Fixed const &copy)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(Fixed const &copy)
{
	// std::cout << "Copy Assignment Operator called" << std::endl;
	this->value = copy.getRawBits();
	return *this;

}

float Fixed::toFloat(void) const
{
	return (this->value * ft_pow(2, -this->frac));
}

int Fixed::toInt(void) const
{
	return (this->value * ft_pow(2, -this->frac));
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(const int raw)
{
	this->value = raw;
}

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr)
{
	return (str << fixed_nbr.toFloat());
}

// 6 Comparison Operators

bool	Fixed::operator>(Fixed fixed) const
{
	return (this->toFloat() > fixed.toFloat());
}

bool	Fixed::operator<(Fixed fixed) const
{
	return (this->toFloat() < fixed.toFloat());
}

bool	Fixed::operator>=(Fixed fixed) const
{
	return (this->toFloat() >= fixed.toFloat());
}

bool	Fixed::operator<=(Fixed fixed) const
{
	return (this->toFloat() <= fixed.toFloat());
}

bool	Fixed::operator==(Fixed fixed) const
{
	return (this->toFloat() == fixed.toFloat());
}

bool	Fixed::operator!=(Fixed fixed) const
{
	return (this->toFloat() != fixed.toFloat());
}

// 4 Arithmetic operators

float	Fixed::operator+(Fixed fixed) const
{
	return (this->toFloat() + fixed.toFloat());
}

float	Fixed::operator-(Fixed fixed) const
{
	return (this->toFloat() - fixed.toFloat());
}

float	Fixed::operator*(Fixed fixed) const
{
	return (this->toFloat() * fixed.toFloat());
}

float	Fixed::operator/(Fixed fixed) const
{
	return (this->toFloat() / fixed.toFloat());
}

// Pre-increment Operators

Fixed	Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed	Fixed::operator--()
{
	this->value--;
	return (*this);
}

// Post-increment Operators

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->value++;
	return tmp;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->value--;
	return tmp;
}

// min and max functions
Fixed	&Fixed::min(Fixed &first, Fixed &second)
{
	if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

Fixed	&Fixed::max(Fixed &first, Fixed &second)
{
	if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed	&Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
}