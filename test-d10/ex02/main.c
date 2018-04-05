#include <stdio.h>

int	*ft_map(int *tab, int length, int(*f)(int));

int ft_sum42 (int i)
{
	i = i + 42;
	return (i);
}

int		main(void)
{
	int 	tab[4] = {1, 2, 3, 9};
	int		(*function)(int);
	int 	i;

	
	function = &ft_sum42;
	i = 0;
	while (i < 4)
	{
		printf("%d\n", ft_map(tab, 4, function)[i]);
		i++;
	}
	return (0);
}