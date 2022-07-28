/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:30:52 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/05 17:29:16 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

// Lexicographically compare the null-terminated strings s1 and s2.
// Return an integer greater than, equal to, or less than 0, according as the
// string s1 is greater than, equal to, or less than the string s2.
// The comparison is done using unsigned characters,
// so that `\200' is greater than `\0'.
int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
