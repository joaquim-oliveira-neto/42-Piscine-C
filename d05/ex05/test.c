#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str[] = "asdf qwerty";
	char to_find[] = "zxcv";

	printf("%s\n", strstr(str, to_find));

	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}
