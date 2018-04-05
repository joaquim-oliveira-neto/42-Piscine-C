#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int main(void)
{
	int		ret;
	int		ret2;
	int		ret3;
	int		ret4;
	int		ret5;
	int		ret6;
	char	str1[10] = "";
	char	str2[10] = "Exer";

	ret = ft_strcmp(str1, str2);

	printf("MY str1: %s\n", str1);
	printf("MY str2: %s\n", str2);
	printf("MY RET: %d\n", ret);
	printf("=======\n");

	ret2 = strcmp(str1, str2);

	printf("STRSTR str1: %s\n", str1);
	printf("STRSTR str2: %s\n", str2);
	printf("STRSTR RET: %d\n", ret2);
	printf("**********\n\n");

	/////////////////////////////////////

	char	str3[10] = "1234";
	char	str4[10] = "";

	ret3 = ft_strcmp(str3, str4);

	printf("MY str3: %s\n", str3);
	printf("MY str4: %s\n", str4);
	printf("MY RET: %d\n", ret3);
	printf("=======\n");

	ret4 = strcmp(str3, str4);

	printf("STRSTR str3: %s\n", str3);
	printf("STRSTR str4: %s\n", str4);
	printf("STRSTR RET: %d\n", ret4);
	printf("**********\n\n");

	/////////////////////////////////////

	char	str5[10] = "Exer";
	char	str6[10] = "OPser";

	ret5 = ft_strcmp(str5, str6);

	printf("MY str5: %s\n", str5);
	printf("MY str6: %s\n", str6);
	printf("MY RET: %d\n", ret5);
	printf("=======\n");

	ret6 = strcmp(str5, str6);

	printf("STRSTR str5: %s\n", str5);
	printf("STRSTR str6: %s\n", str6);
	printf("STRSTR RET: %d\n", ret6);
	printf("**********\n\n");

	return (0);
}
