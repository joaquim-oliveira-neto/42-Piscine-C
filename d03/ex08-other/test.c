#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
	int		nbr;
	int		sign;
	int		flag;

	nbr = 0;
	flag = 0;
	while (*str != '\0' && !(*str >= '0' && *str <= '9'))
	{	
		if (!( *str == ' ' || *str == '\t' || *str == '\v' || *str == '\f' || *str == '\r' || *str == '\n'))
			flag = 1;
		str++;
	}
	str--;	
	sign = 1;
	if (*str == '+')
	{
		flag = 0;
		str++;
	}
	else if (*str == '-')
	{
		sign = -1;
		flag = 0;
		str++;
	}
	else
		str++;
	while (*str != '\0' && (*str >= '0' && *str <= '9') && flag == 0)
	{
		nbr = nbr * 10 + (*str - '0');
		str++;
	}
	return (nbr * sign);	
}

int	main(void)
{
	char word[] = " 	 a -12";
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