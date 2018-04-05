#include <stdio.h>
#include <stdlib.h>
void    ft_sort_wordtab(char** tab);
int main(int argc, char** argv)
{
    if (argc < 1)
        return 0;
    ft_sort_wordtab(argv + 1);
    for (char** iter = argv + 1; *iter != 0; iter++)
        printf("%s,", *iter);
}