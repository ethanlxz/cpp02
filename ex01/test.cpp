#include <iostream>

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

int main()
{
	float res = (80 * ft_pow(2, -8));

	std::cout << "ans is : " << res << std::endl;

}
