#include <stdio.h>

int	ft_count_if(char **tab, int(*f)(char*));

int ft_is_there_a (char *str)
{
	while (*str)
	{
		if (*str == 'a')
			return (1);
		str++;
	}
	return (0);
}

int		main(void)
{
	char 	*tab[4];
	int		(*function)(char*);

	tab[0] = "abcd";
	tab[1] = "bcad";
	tab[2] = "cda";
	tab[3] = (char*)0;
	function = &ft_is_there_a;

	printf("%d\n", ft_count_if(tab, function));
	return (0);
}