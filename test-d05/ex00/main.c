void	ft_putchar(char c);

void	ft_putstr(char *str);

int		ft_strcmp(char *s1, char *s2);

int		ft_strlen(char *str);

void	ft_swap(int *a, int *b);

int		main(void)
{
	char	str[] = "Hi there";
	int		c;
	int		d;
	int		*a;
	int		*b;

	c = 65;
	d = 66;
	a = &c;
	b = &d;

	ft_swap(a, b);
	ft_putchar(*a);
	ft_putchar('\n');
	ft_putchar(*b);
	ft_putchar('\n');
	c = ft_strlen("Hello World!!!!!!!!!!!!");
	ft_putchar(c);
	ft_putchar('\n');
	ft_putstr(str);
	return (0);
}
