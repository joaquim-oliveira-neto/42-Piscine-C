#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int ft_atoi(char *str);
	char word[] = " a -12";
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