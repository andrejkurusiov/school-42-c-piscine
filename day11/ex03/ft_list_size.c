/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:46:45 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/12 16:37:56 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list);

// Returns the number of elements in the list.
int	ft_list_size(t_list *begin_list)
{
	t_list	*new_element;
	int		count;

	count = 0;
	new_element = begin_list;
	if (new_element)
	{
		count = 1;
		while (new_element->next)
		{
			new_element = new_element->next;
			count++;
		}
	}
	return (count);
}
