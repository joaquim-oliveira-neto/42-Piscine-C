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

int ft_find_next_prime(int nb)
{
	int nextprime;

	if (ft_is_prime(nb))
		return nb;
	if (nb <= 2)
		return 2;
	nextprime = nb;
	if (nb % 2 == 0)
		nextprime = nb + 1;
	while (nextprime < 2147483647) 
	{
		if (ft_is_prime(nextprime))
			return nextprime;
		nextprime += 2;
	}
	return -1;
}

int main(void)
{
	int index;
	
	index = 3;
	printf("%d\n", ft_find_next_prime(index));
	return 0;
}