#include "ft_btree.h"
#include <stdio.h>
void    btree_apply_suffix(t_btree *root, void (*applyf)(void *));
void    btree_insert_data(t_btree **root, void *item,
        int (*cmpf)(void *, void *));
int     ft_strcmp(void *s1, void *s2)
{
    char *str1;
    char *str2;
    str1 = (char *)s1;
    str2 = (char *)s2;
    while (*str1 && *str2 && *str1 == *str2)
    {
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}
t_btree *create_tree(void)
{
    t_btree *root;
    t_btree **root1;
    root1 = &root;
    btree_insert_data(root1, "4", ft_strcmp);
    btree_insert_data(root1, "2", ft_strcmp);
    btree_insert_data(root1, "6", ft_strcmp);
    btree_insert_data(root1, "1", ft_strcmp);
    btree_insert_data(root1, "3", ft_strcmp);
    btree_insert_data(root1, "5", ft_strcmp);
    btree_insert_data(root1, "7", ft_strcmp);
    return (root);
}
void print_item(void *item)
{
    printf("%s, ", (char *)item);
}
int     main(void)
{
    
    btree_apply_suffix(create_tree(), print_item);
    return (0);
}