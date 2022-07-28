#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av);

int	main(int argc, char **argv)
{
	t_list	*list;

	list = ft_list_push_params(argc, argv);

	while (list != 0)
	{
		printf("%s\n", list->data);
		list = list->next;
	}
	return (0);
}
