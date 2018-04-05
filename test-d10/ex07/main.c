#include <stdio.h>
#include <stdlib.h>

void ft_sort_wordtab(char **tab);

int		ft_words_count(char *str)
{
	int	i;
	int	words_count;

	words_count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
		{
			words_count++;
			while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				&& str[i])
			{
				i++;
			}
		}
	}
	return (words_count);
}

void	ft_allocate_strings_on_array(char *str, char **arr)
{
	int		i;
	int		j;
	int		word_size;
	char	*word;

	j = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		word_size = 0;
		while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
		{
			word_size++;
			i++;
		}
		if (word_size != 0)
		{
			word = (char*)malloc((sizeof(char) * (word_size + 1)));
			arr[j] = word;
			j++;
		}
	}
}

void	ft_fill_strings_with_characters(char *str, char **arr)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
		{
			k = 0;
			while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				&& str[i])
			{
				arr[j][k++] = str[i++];
			}
			arr[j][k] = '\0';
			j++;
		}
	}
}

char	**ft_split_whitespaces(char *str)
{
	int		words_count;
	char	**arr;

	words_count = ft_words_count(str);
	arr = (char**)malloc((sizeof(char*) * words_count) + sizeof(0));
	if (words_count > 0)
	{
		ft_allocate_strings_on_array(str, arr);
		ft_fill_strings_with_characters(str, arr);
		arr[words_count] = 0;
	}
	else
		arr[0] = 0;
	return (arr);
}


char	**ft_split_whitespaces(char *str);

int	main()
{
	char	**tab;

	tab = ft_split_whitespaces("   ^ bola ");
	ft_sort_wordtab(tab);

	printf("%s\n", tab[0]);
	printf("%s\n", tab[1]);
	printf("%s\n", tab[2]);
	printf("%s\n", tab[3]);

}