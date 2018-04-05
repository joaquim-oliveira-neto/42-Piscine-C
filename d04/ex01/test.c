#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return 1;
	else if (nb < 0 || nb > 12)
		return 0;
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}

int main(void)
{
	int num;

	num = 13;
	num = ft_recursive_factorial(num);
	printf("%d\n", num);
	return 0;
}