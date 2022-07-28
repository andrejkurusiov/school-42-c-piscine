/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:46:45 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/12 16:03:36 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data);
void	ft_list_push_front(t_list **begin_list, void *data);

// Adds a new element of t_list type at the beginning of the list.
void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_element;

	new_element = *begin_list;
	if (!new_element)
		*begin_list = ft_create_elem(data);
	else
	{
		new_element = ft_create_elem(data);
		new_element->next = *begin_list;
		*begin_list = new_element;
	}
	return ;
}
