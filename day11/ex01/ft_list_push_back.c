/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:46:45 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/12 18:27:19 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data);

// Adds a new element of t_list type at the end of the list.
void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_element;

	new_element = *begin_list;
	if (!new_element)
		*begin_list = ft_create_elem(data);
	else
	{
		while (new_element->next)
			new_element = new_element->next;
		new_element->next = ft_create_elem(data);
	}
	return ;
}
