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
		int getRawBits();
		void setRawBits(int const raw);

};