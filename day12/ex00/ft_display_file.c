/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:05:37 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/13 13:18:29 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_df.h"

#define BUF_SIZE	4096

// prints out a file with fd file descriptor
void	print_file(int fd)
{
	int		ret;
	char	buf[BUF_SIZE + 1];

	ret = read(fd, buf, BUF_SIZE);
	while (ret)
	{
		buf[ret] = '\0';
		ft_putstr(buf, 1);
		ret = read(fd, buf, BUF_SIZE);
	}
}

// Displays, on the standard output, the content of the file given as argument.
// All files given as arguments will be valid.
// Error messages have to be displayed on their reserved output.
int	main(int argc, char **argv)
{
	int		fd;

	if (argc < 2)
	{
		ft_putstr("File name missing.\n", 2);
		return (1);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n", 2);
		return (1);
	}
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd != -1)
		{
			print_file(fd);
			close(fd);
		}
	}
	return (0);
}
