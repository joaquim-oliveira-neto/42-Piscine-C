#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int res;

	if (power < 0)
		return 0;
	if (power == 0)
		return 1;
	res = nb;
	while (power > 1)
	{
		res *= nb;
		power--;
	}
	return res;
}

int main(void)
{
	int num;
	int power;

	num = 5;
	power = 0;
	num = ft_iterative_power(num, power);
	printf("%d\n", num);
	return 0;
}