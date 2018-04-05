#include <unistd.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	ft_putchar(int c)
{
	c = c + 48;
	write(1, &c, 1);
}

int		main(void)
{
	int 	tab[4] = {1, 2, 3, 9};
	void	(*function)(int);

	
	function = &ft_putchar;
	ft_foreach(tab, 4, function);
	return (0);
}