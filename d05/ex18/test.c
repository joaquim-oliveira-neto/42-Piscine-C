#include <unistd.h>
#include <stdio.h>
#include <string.h>

// unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char str[] = "hello";
	char str2[] = "asdf";
	unsigned int size;
	size = 11;

	printf("%lu\n", strlcat(str, str2, size));
	return (0);
}
