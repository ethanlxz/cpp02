// #ifndef FIXED_HPP
// # define FIXED_HPP

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					value;
		static const int	frac;
	public:
		// contructors
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		// deconstructor
		~Fixed();
		// copy constructor
		Fixed(Fixed const &copy);
		// copy assignment operator
		Fixed &operator=(Fixed const &copy);
		// fixed point functions
		float toFloat() const;
		int toInt() const;
		int getRawBits() const;
		void setRawBits(int const raw);
		// 6 comparison operators
		bool operator>(Fixed fixed)const;
		bool operator<(Fixed fixed)const;
		bool operator>=(Fixed fixed)const;
		bool operator<=(Fixed fixed)const;
		bool operator==(Fixed fixed)const;
		bool operator!=(Fixed fixed)const;
		// 4 arithmetic operators
		float	operator+(Fixed fixed) const;
		float	operator-(Fixed fixed) const;
		float	operator*(Fixed fixed) const;
		float	operator/(Fixed fixed) const;
		// pre-increment operators
		Fixed	operator++();
		Fixed	operator--();
		// post-increment operators
		Fixed	operator++(int);
		Fixed	operator--(int);
		// min and max functions
		static Fixed	&min(Fixed &first, Fixed &second);
		static const Fixed	&min(const Fixed &first, const Fixed &second);
		static Fixed	&max(Fixed &first, Fixed &second);
		static const Fixed	&max(const Fixed &first, const Fixed &second);



};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);

// #endif