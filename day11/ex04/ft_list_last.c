/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:46:45 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/12 17:35:25 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list);

// Returns the last element of the list.
t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*l_element;

	l_element = begin_list;
	if (l_element)
	{
		while (l_element->next)
			l_element = l_element->next;
	}
	return (l_element);
}
