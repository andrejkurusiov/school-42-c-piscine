/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 08:08:48 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/05 16:38:31 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// stpncpy() copies at most len characters from src into dst.
// If src is less than len characters long, the remainder of dst
// is filled with `\0' characters.
// Otherwise, dst is not terminated.
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
