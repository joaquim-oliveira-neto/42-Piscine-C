#include <stdio.h>

 int ft_iterative_factorial(int nb)
 {
 	int res;

 	res = 0;
 	if (nb < 0 || nb > 14)
 		return (res);
 	else
 	{
 		res = 1;
 		while (nb > 0)
 		{
 			res = res * nb;
 			nb--;
 		}
 	}
 	return (res);
 }

 int main(void)
 {
 	int num;

 	num = 13;
 	num = ft_iterative_factorial(num);
 	printf("%d\n", num);
 	return 0;
 }