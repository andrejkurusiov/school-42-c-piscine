/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:44:02 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/04 19:44:50 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copy the string src to dst (including the terminating `\0' character.)
// The strcpy() functions return dst.
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
