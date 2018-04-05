#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	// char *dest1;
	// char *src1;
	// char *dest2;
	// char *src2;
	// char *dest3;
	// char *src3;
	// char *dest4;
	// char *src4;
	// char *dest5;
	// char *src5;
	// char *dest11;
	// char *src11;
	// char *dest21;
	// char *src21;
	// char *dest31;
	// char *src31;
	// char *dest41;
	// char *src41;
	// char *dest51;
	// char *src51;

	// char dest1[] = "abcde";
	// char src1[] = "fghij";
	// char dest11[] = "abcde";
	// char src11[] = "fghij";

	// char dest2[] = "abcd";
	// char src2[] = "fg";
	// char dest21[] = "abcd";
	// char src21[] = "fg";

	char dest3[] = "12";
	char src3[] = "ABCD";
	char dest31[] = "12";
	char src31[] = "abcd";

	// char dest4[] = "";
	// char src4[] = "fghi";
	// char dest41[] = "";
	// char src41[] = "fghi";

	// char dest5[] = "abcd";
	// char src5[] = "";
	// char dest51[] = "abcd";
	// char src51[] = "";

	// char dest6[] = "abcdef";
	// char src6[] = "fghi\n\n";
	// char dest61[] = "abcdef";
	// char src61[] = "fghi\n\n";

	// strncpy(dest1, src1, 6);
	// printf("%s\n", dest1);
	// ft_strncpy(dest11, src11, 6);
	// printf("%s\n", dest11);
	// printf("%s\n", "********");

	// strncpy(dest2, src2, 5);
	// printf("%s\n", dest2);
	// ft_strncpy(dest21, src21, 5);
	// printf("%s\n", dest21);
	// printf("%s\n", "********");

	
	printf("%s\n", strncpy(dest3, src3, 3));
	printf("%s\n", ft_strncpy(dest31, src31, 3));
	printf("%s\n", "********");
	
	// strncpy(dest4, src4);
	// printf("%s\n", dest4);
	// ft_strncpy(dest41, src41);
	// printf("%s\n", dest41);
	// printf("%s\n", "********");
	
	// strncpy(dest5, src5);
	// printf("%s\n", dest5);
	// ft_strncpy(dest51, src51);
	// printf("%s\n", dest51);
	// printf("%s\n", "********");

	// strncpy(dest6, src6);
	// printf("%s\n", dest6);
	// ft_strncpy(dest61, src61);
	// printf("%s\n", dest61);
	// printf("%s\n", "********");
	
	
	return (0);
}
