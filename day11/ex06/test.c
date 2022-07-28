#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_list.h"

// ----> the function to be tested
void	ft_list_clear(t_list **begin_list);
// helper functions:
void	ft_list_push_back(t_list **begin_list, void *data);

void	print_list(t_list **list)
{
	t_list	*lst = *list;

	if (lst)
	{
		printf("A list: ");
		while (lst)
		{
			printf("%s ", lst->data);
			lst = lst->next;
		}
	}
	else
		printf("Empty list (NULL).\n");
}

// ----> MAIN <-----
int	main(int argc, char **argv)
{
	t_list	*list;

	char *para1 = argv[1];
	char *para2 = argv[2];

	printf("-> INITIAL: provide 2 strings as arguments to form a list.\n");

	list = NULL;
	ft_list_push_back(&list, para1);
	ft_list_push_back(&list, para2);
	ft_list_push_back(&list, argv[3]);

	printf("Initial list:\n");
	printf("begin_list (main): %p\n", list);
	print_list(&list);

	// EXPECTED
	printf("\n-> EXPECTED:\n");
	t_list	*list2;
	print_list(&list2);

	// ACTUAL
	printf("\n-> ACTUAL:\n");
	ft_list_clear(&list);
	print_list(&list);

	return (0);
}
