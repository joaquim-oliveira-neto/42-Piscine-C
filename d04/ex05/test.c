#include <stdio.h>
#include <math.h>

int ft_sqrt(int nb)
{
	int i;

	i = 1;
	while ( i <= 46339 && i * i <= nb)
		i++;
	i--;
	if (i * i == nb)
		return i;
	else
		return 0;
}

int main(void)
{
	int index;
	
	index = 46339 * 46339;
	printf("%d\n", ft_sqrt(index));
	return 0;
}