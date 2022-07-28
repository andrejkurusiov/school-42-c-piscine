/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:09:14 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/05 13:27:04 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reproduce the behavior of the function strstr.
// strstr(const char *haystack, const char *needle);
// strstr() function locates the first occurrence of the null-terminated
//  string needle in the null-terminated string haystack.
// RETURN VALUES:
// If needle is an empty string, haystack is returned; if needle occurs nowhere
//  in haystack, NULL is returned; otherwise a pointer
//  to the first character of the first occurrence of needle is returned.
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
			if (str[i + j] == '\0')
				return ((void *)0);
		}
		i++;
	}
	return ((void *)0);
}
