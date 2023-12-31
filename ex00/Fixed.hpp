// #ifndef FIXED_HPP
// # define FIXED_HPP

#pragma once

#include <iostream>

class Fixed
{
	private:
		int					value;
		static const int	frac;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &copy);
		Fixed &operator=(Fixed const &copy);
		int getRawBits() const;
		void setRawBits(int const raw);

};

// #endif