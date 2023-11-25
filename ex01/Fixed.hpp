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
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();
		Fixed(Fixed const &copy);
		Fixed &operator=(Fixed const &copy);
		float toFloat() const;
		int toInt() const;
		int getRawBits() const;
		void setRawBits(int const raw);

};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);

// #endif