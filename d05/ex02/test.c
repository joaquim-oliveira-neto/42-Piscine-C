// #include <unistd.h>
// #include <stdio.h>

// int	ft_atoi(char *str);

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// int		main(void)
// {
// 	char string[] = "  	-12";

// 	printf("%d\n", ft_atoi(string));
// 	return (0);
// }

// A simple C++ program for implementation of atoi
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(char *str);
// A simple atoi() function
// int ft_atoi(char *str)
// {
// 	int		res;
// 	int		n;
// 	int		sign;

// 	sign = 1;
// 	res = 0;
// 	n = 0;
// 	while ((str[n] != '+') && (str[n] != '-') && !(str[n] >= '0' && str[n] <= '9'))
// 	{
// 		n++;
// 	}
// 	if (str[n] == '-' || str[n] == '+')
// 	{
// 		if (str[n] == '-')
// 			sign = -1;
// 		n++;
// 	}
// 	while (str[n] >= '0' && str[n] <= '9')
// 	{
// 		res = res * 10 + (str[n] - '0');
// 		n++;
// 	}
// 	return (sign * res);
// }
  
// Driver program to test above function
int main()
{
 //    char str[] = "21 2313";
 //    int val = ft_atoi(str);
	// printf ("%d\n", val); 
	// printf("%d\n", atoi(str));   
	// printf("%s\n", "************\n");

	// char str2[] = "2147483647";
 //    int val2 = ft_atoi(str2);
	// printf ("%d\n", val2);
	// printf("%d\n", atoi(str2));    
	// printf("%s\n", "************\n");

	// char str3[] = "-2147483648";
 //    int val3 = ft_atoi(str3);
	// printf ("%d\n", val3);
	// printf("%d\n", atoi(str3));    
	// printf("%s\n", "************\n");

	// char str4[] = "0";
 //    int val4 = ft_atoi(str4);
	// printf ("%d\n", val4);
	// printf("%d\n", atoi(str4));   
	// printf("%s\n", "************\n");

	// char str5[] = "12211t11";
 //    int val5 = ft_atoi(str5);
	// printf ("%d\n", val5);
	// printf("%d\n", atoi(str5));   
	// printf("%s\n", "************\n");

	// char str6[] = "              a 45646";
 //    int val6 = ft_atoi(str6);
	// printf ("%d\n", val6);
	// printf("%d\n", atoi(str6));    
	// printf("%s\n", "************\n");

	// char str7[] = "+++123132";
 //    int val7 = ft_atoi(str7);
	// printf ("%d\n", val7);
	// printf("%d\n", atoi(str7));    
	// printf("%s\n", "************\n");

	// char str8[] = "--4564564";
 //    int val8 = ft_atoi(str8);
	// printf ("%d\n", val8);
	// printf("%d\n", atoi(str8));   
	// printf("%s\n", "************\n");

	char str[] = "2--1 2313";
    int val = ft_atoi(str);
	printf("Input: %s\n", str);
	printf("My Function: %d\n", val); 
	printf("ATOI: %d\n", atoi(str));   
	printf("%s\n", "***********");

	char str2[] = "		\2147483647";
    int val2 = ft_atoi(str2);
	printf("Input: %s\n", str2);
	printf("My Function: %d\n", val2);
	printf("ATOI: %d\n", atoi(str2));    
	printf("%s\n", "***********");

	char str3[] = "-21~474\\83648";
    int val3 = ft_atoi(str3);
	printf("Input: %s\n", str3);
	printf("My Function: %d\n", val3);
	printf("ATOI: %d\n", atoi(str3));    
	printf("%s\n", "***********");

	char str4[] = "";
    int val4 = ft_atoi(str4);
	printf("Input: %s\n", str4);
	printf("My Function: %d\n", val4);
	printf("ATOI: %d\n", atoi(str4));   
	printf("%s\n", "***********");

	char str5[] = "122*=/11t11";
    int val5 = ft_atoi(str5);
	printf("Input: %s\n", str5);
	printf("My Function: %d\n", val5);
	printf("ATOI: %d\n", atoi(str5));   
	printf("%s\n", "***********");

	char str6[] = "              a 45646";
    int val6 = ft_atoi(str6);
	printf("Input: %s\n", str6);
	printf("My Function: %d\n", val6);
	printf("ATOI: %d\n", atoi(str6));    
	printf("%s\n", "***********");

	char str7[] = "+123^132";
    int val7 = ft_atoi(str7);
	printf("Input: %s\n", str7);
	printf("My Function: %d\n", val7);
	printf("ATOI: %d\n", atoi(str7));    
	printf("%s\n", "***********");

	char str8[] = "---4564564";
    int val8 = ft_atoi(str8);
	printf("Input: %s\n", str8);
	printf("My Function: %d\n", val8);
	printf("ATOI: %d\n", atoi(str8));   
	printf("%s\n", "***********");
    return 0;
}
