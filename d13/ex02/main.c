#include "ft_btree.h"
#include <stdio.h>

t_btree *btree_create_node(void *item);

void    btree_apply_infix(t_btree *root, void (*applyf)(void *));

t_btree *create_tree(void)
{
    t_btree *root;
    root = btree_create_node("4");
    root->left = btree_create_node("2");
    root->right = btree_create_node("6");
    root->left->left = btree_create_node("1");
    root->left->right = btree_create_node("3");
    root->right->left = btree_create_node("5");
    root->right->right = btree_create_node("7");
    return (root);
}
void print_item(void *item)
{
    printf("%s, ", (char *)item);
}
int     main(void)
{
    t_btree *test;
    
    test = create_tree();
    btree_apply_infix(test, print_item);
    return (0);
}