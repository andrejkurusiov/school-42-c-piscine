/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:19:02 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/06 12:39:47 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src);
char	*ft_strcpy(char *dest, char *src);
int		ft_sizeof(char *str);

// returns a size of a string in bytes
int	ft_sizeof(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// copies a string to dest and returns a pointer to it
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

// Reproduce the behavior of the function strdup.
// strdup() function allocates sufficient memory for a copy of the string s1,
//  does the copy, and returns a pointer to it. The pointer may subsequently
//  be used as an argument to the function free(3).
// If insufficient memory is available, NULL is returned
//  and errno is set to ENOMEM. <-- can't implement it as requires <sys/errno.h>
// void *malloc(size_t size); -- need to cast to the type eg. (char*)malloc();
// The malloc() function allocates size _bytes_ of memory and returns
//  a pointer to the allocated memory.
// If there is an error, they return a NULL pointer and set errno to ENOMEM.
char	*ft_strdup(char *src)
{
	char	*dest;

	dest = (char *) malloc((ft_sizeof(src) + 1));
	if (dest == NULL)
		return ((void *)0);
	else
		return (ft_strcpy(dest, src));
}
