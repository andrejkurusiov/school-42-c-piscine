/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:46:45 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/13 11:00:13 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list);

// Create the function ft_list_clear which clears all links from the list.
// It’ll then set the given argument to NULL.
void	ft_list_clear(t_list **begin_list)
{
	t_list	*head;
	t_list	*nxt;

	if (*begin_list)
	{
		head = *begin_list;
		while (head->next)
		{
			nxt = head->next;
			free(head);
			head = nxt;
		}
		free(head);
		*begin_list = NULL;
	}
}
