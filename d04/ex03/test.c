#include <stdio.h>
#include <math.h>

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return 0;
	if (power == 0)
		return 1;
	return (nb * ft_recursive_power(nb, power - 1));
}

int main(void)
{
	int num;
	int power;

	num = 5;
	power = 0;
	printf("Value 0 ^ 0 = %lf\n", pow(0.0, 0.0));
	num = ft_recursive_power(num, power);
	printf("%d\n", num);
	return 0;
}