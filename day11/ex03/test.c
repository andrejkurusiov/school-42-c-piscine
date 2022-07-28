#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_list.h"

// ----> the function to be tested
int	ft_list_size(t_list *begin_list);
t_list	*ft_create_elem(void *data);
void	ft_list_push_back(t_list **begin_list, void *data);

// ----> MAIN <-----
int	main(int argc, char **argv)
{
	t_list	*list;

	char *para1 = argv[1];
	//char *para2 = argv[2];

	printf("-> INITIAL: provide two strings as arguments.\n");

	// list = NULL;
	ft_list_push_back(&list, para1);
	//ft_list_push_back(&list, para2);

	// EXPECTED
	printf("-> EXPECTED:\n");
	// TODO

	// ACTUAL
	printf("-> ACTUAL:\n");
	printf("%i\n", ft_list_size(list));
	while (list)
	{
		printf("%s ", list->data);
		list = list->next;
	}
	return (argc);
}
