#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char	*ft_strcapitalize(char *str);

int main(void)
{
	char		ret;
	char		ret2;
	char		ret3;
	char		ret4;
	char		ret5;
	char		ret6;

	char	str1[110] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("MY str1: %s\n", str1);
	printf("MY RET: %s\n", ft_strcapitalize(str1));
	printf("=======\n");
	
	char	str12[20] = "asda sdae";

	printf("MY str1: %s\n", str12);
	printf("MY RET: %s\n", ft_strcapitalize(str12));
	printf("=======\n");

	char	str13[30] = "abc  def +a_213A321 ghi !$#";

	printf("MY str1: %s\n", str13);
	printf("MY RET: %s\n", ft_strcapitalize(str13));
	printf("=======\n");
	return (0);
}
