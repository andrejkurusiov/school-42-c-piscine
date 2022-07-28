/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_df.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 09:04:35 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/13 12:44:15 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DF_H
# define FT_DF_H

# include <unistd.h>
# include <fcntl.h>

// fd is a file descriptor number
void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i], fd);
		i++;
	}
}

#endif
