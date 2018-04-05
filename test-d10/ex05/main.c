#include <stdio.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int));

int		ft_cmp_nbrs(int a, int b)
{
	if (a < b)
		return (-1);
	else if (a == b)
		return (0);
	else
		return (1);
}

int		main(void)
{
	int		tab[3];
	int 	(*f)(int, int);
	int		length;

	f = &ft_cmp_nbrs;
	tab[0] =  -111306;
	tab[1] = 126823;
	tab[2] = 260482;
	// tab[3] = 10;
	// tab[4] = 11;
	length = 3;

	printf("%d", ft_is_sort(tab, length, f));

	return (0);
}