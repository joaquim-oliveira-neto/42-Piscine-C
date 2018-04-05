#include <stdio.h>

int	nmatch(char *s1, char *s2);

int	main()
{
	char	*s1;
	char	*s2;

	s1 = "*ba*babb";
	s2 = "*a*b*";
	printf("%d\n", nmatch(s1, s2));
	return (0);
}