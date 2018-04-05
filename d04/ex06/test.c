#include <stdio.h>
#include <math.h>

int ft_is_prime(int nb)
{
	int divisor;

	if (nb <= 1)
		return 0;
	divisor = nb / 2;
	while (nb % divisor != 0 || divisor == 1)
	{
		if (divisor == 1)
			return 1;
		divisor--;
	}
	return 0;
}

int main(void)
{
	int index;
	
	index = 2147483647;
	printf("%d\n", ft_is_prime(index));
	return 0;
}