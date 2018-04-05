#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
	int		nbr;
	int		sign;

	nbr = 0;
	while (*str != '\0' && !(*str >= '0' && *str <= '9'))
		str++;
	str--;	
	sign = 1;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else
		str++;
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		nbr = nbr * 10 + (*str - '0');
		str++;
	}
	return (nbr * sign);	
}

int	main(void)
{
	char word[] = " 	 -12";
	int testnbr;
	int nbr;

	printf("%s\n", word);
    testnbr = atoi(word);
	nbr = ft_atoi(word);
	printf("%d", testnbr);
	printf("%s", "======="); 
	printf("%d", nbr);
	return (0);
}