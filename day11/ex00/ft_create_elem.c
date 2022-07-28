/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 09:13:07 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/12 12:01:24 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);

//creates a new element of t_list type
t_list	*ft_create_elem(void *data)
{
	t_list	*new_element;

	new_element = (t_list *) malloc(sizeof(t_list));
	if (new_element)
	{
		new_element -> data = data;
		new_element -> next = NULL;
	}
	return (new_element);
}
