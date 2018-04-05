#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);


int main(void)
{
	int		minha;
	int		original;
	int		size;

	// char	dest[10] = "123456789";;
	char	src[5] = "abcd";
	// size = 3;

	// printf("DEST Original: %s\n", dest);
	// printf("SOURCE Original: %s\n", src);
	// printf("Size: %d\n", size);
	// printf("*********\n");

	// minha = ft_strlcpy(dest, src, size);
	// original = strlcpy(dest, src, size);

	// printf("MINHA FUNCAO: %d\n", minha);
	// printf("FUNCAO ORIGINAL: %d\n", original);
	// printf("DEST FINAL!: %s\n", dest);
	// printf("==========================\n");

 //    //////////////////////////////////////////////////

	// char	dest1[10] = "123456789";
 //    size = 4;

	// printf("dest1 Original: %s\n", dest1);
	// printf("SOURCE Original: %s\n", src);
	// printf("Size: %d\n", size);
	// printf("*********\n");

	// minha = ft_strlcpy(dest1, src, size);
	// original = strlcpy(dest1, src, size);

	// printf("MINHA FUNCAO: %d\n", minha);
	// printf("FUNCAO ORIGINAL: %d\n", original);
	// printf("dest1 FINAL!: %s\n", dest1);
	// printf("==========================\n");

	// ///////////////////////////////////////////////////
	// char	dest2[10] = "123456789";
	// size = 5;

	// printf("dest2 Original: %s\n", dest2);
	// printf("SOURCE Original: %s\n", src);
	// printf("Size: %d\n", size);
	// printf("*********\n");

	// minha = ft_strlcpy(dest2, src, size);
	// original = strlcpy(dest2, src, size);

	// printf("MINHA FUNCAO: %d\n", minha);
	// printf("FUNCAO ORIGINAL: %d\n", original);
	// printf("dest2 FINAL!: %s\n", dest2);
	// printf("==========================\n");

 //    //////////////////////////////////////////////////
	// char	dest3[10] = "123456789";
 //    size = 8;

	// printf("dest3 Original: %s\n", dest3);
	// printf("SOURCE Original: %s\n", src);
	// printf("Size: %d\n", size);
	// printf("*********\n");

	// minha = ft_strlcpy(dest3, src, size);
	// original = strlcpy(dest3, src, size);

	// printf("MINHA FUNCAO: %d\n", minha);
	// printf("FUNCAO ORIGINAL: %d\n", original);
	// printf("dest3 FINAL!: %s\n", dest3);
	// printf("==========================\n");

	// ///////////////////////////////////////////////////
	char	dest4[4] = "abc";
    size = 8;

	printf("dest4 Original: %s\n", dest4);
	printf("SOURCE Original: %s\n", src);
	printf("Size: %d\n", size);
	printf("*********\n");

	minha = ft_strlcpy(dest4, src, size);
	// original = strlcpy(dest4, src, size);

	printf("MINHA FUNCAO: %d\n", minha);
	// printf("FUNCAO ORIGINAL: %d\n", original);
	printf("dest4 FINAL!: %s\n", dest4);
	printf("==========================\n");

	///////////////////////////////////////////////////

	return (0);
}
