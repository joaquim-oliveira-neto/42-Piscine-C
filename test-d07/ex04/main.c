#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int	main()
{
	char	**str;

	str = ft_split_whitespaces(" paca  ^ bola ");
	printf("%s\n", str[0]);
	printf("%s\n", str[1]);
	printf("%s\n", str[2]);
	printf("%s\n", str[3]);

}