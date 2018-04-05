#include <unistd.h>

void	ft_putnbr(int nbr);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int	nbr;

	nbr = 4;
	ft_putnbr(nbr);
	ft_putchar('\n');
	nbr = -12345;
	ft_putnbr(nbr);
	ft_putchar('\n');
	nbr = -1;
	ft_putnbr(nbr);
	ft_putchar('\n');
	nbr = 0;
	ft_putnbr(nbr);
	ft_putchar('\n');
	nbr = +1;
	ft_putnbr(nbr);
	ft_putchar('\n');
	nbr = 1;
	ft_putnbr(nbr);
	ft_putchar('\n');
	nbr = 23;
	ft_putnbr(nbr);
	ft_putchar('\n');
	nbr = -2147483648;
	ft_putnbr(nbr);
	ft_putchar('\n');
	nbr = 2147483647;
	ft_putnbr(nbr);
	ft_putchar('\n');
	return (0);
}
