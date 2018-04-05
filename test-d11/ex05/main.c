#include "../../d11/ex05/ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (elem)
	{
		elem->next = NULL;
		elem->data = data;
	}
	return (elem);
}

t_list	*ft_list_push_params(int ac, char **av);

void print_list(t_list *list)
{
	while (list)
	{
		printf("%s\n", (list->data));
		list = list->next;
	}
}

int main(int argc, char **argv)
{
	print_list(ft_list_push_params(argc, argv));
	return (0);
}