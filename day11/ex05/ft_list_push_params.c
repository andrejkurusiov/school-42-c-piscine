/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:55:04 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/13 17:36:13 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*res;
	t_list	*tmp;
	int		i;

	if (ac < 1)
		return (0);
	i = 0;
	res = 0;
	while (i < ac)
	{
		tmp = ft_create_elem(av[i]);
		tmp->next = res;
		res = tmp;
		i++;
	}
	return (res);
}
