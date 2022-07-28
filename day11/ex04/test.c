#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_list.h"

// ----> the function to be tested
t_list	*ft_list_last(t_list *begin_list);
t_list	*ft_create_elem(void *data);
void	ft_list_push_back(t_list **begin_list, void *data);

// ----> MAIN <-----
int	main(int argc, char **argv)
{
	t_list	*list;

	char *para1 = argv[1];
	char *para2 = argv[2];

	printf("-> INITIAL: provide two strings as arguments.\n");

	// list = NULL;
	ft_list_push_back(&list, para1);
	ft_list_push_back(&list, para2);

	// EXPECTED
	printf("-> EXPECTED:\n");
	// TODO

	// ACTUAL
	printf("-> ACTUAL:\n");
	t_list *l_elem = ft_list_last(list);
	if (l_elem)
		printf("%s \n", l_elem->data);
	else
		printf("Empty list (NULL)\n");
	return (0);
}
