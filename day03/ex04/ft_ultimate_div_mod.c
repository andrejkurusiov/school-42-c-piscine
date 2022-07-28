/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:52:35 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/01 12:52:40 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	float	div_res;
	float	div_mod_res;

	div_res = *a / *b;
	div_mod_res = *a % *b;
	*a = div_res;
	*b = div_mod_res;
	return ;
}
