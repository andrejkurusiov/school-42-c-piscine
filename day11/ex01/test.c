#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_list.h"

// ----> the function to be tested
void	ft_list_push_back(t_list **begin_list, void *data);
t_list	*ft_create_elem(void *data);

// ----> MAIN <-----
int	main(int argc, char **argv)
{
	t_list	*list;

//	char *para1 = argv[1];
	char *para2 = argv[2];

	if (argc != 3)
		printf("-> INITIAL: provide two strings as arguments.\n");

	list = NULL;
//	list = ft_create_elem(para1);
	ft_list_push_back(&list, para2);

	// EXPECTED
	printf("-> EXPECTED:\n");
	// TODO

	// ACTUAL
	printf("-> ACTUAL:\n");
	while (list)
	{
		printf("%s ", list->data);
		list = list->next;
	}
	return (0);
}
