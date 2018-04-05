#include <stdio.h>

int	match(char *s1, char *s2);

int	main()
{
	char	*s1;
	char	*s2;

	s1 = "abdba";
	s2 = "a*b";
	printf("%d\n", match(s1, s2));
	return (0);
}